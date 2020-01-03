unit uCloudAzure;

interface

uses
  Data.Cloud.AzureAPI, System.Classes, Data.Cloud.CloudAPI, System.SysUtils;

type
  TCloudAzure = class
  private
    FAzureCoonection: TAzureConnectionInfo;
    function ObtemConteudoemBytes(const FileName: String): TBytes;
  public
    function ListaContainers(): TStrings;
    function ObtemMetadadosContainer(NomeContainer: string): TStrings;
    function ObtemMetadadosArquivo(NomeContainer, NomeArquivo: string)
      : TStrings;
    function ListaArquivos(NomeContainer: string): TStrings;
    function CriarContainer(NomeContainer: string;
      Metadados: TStrings = nil): boolean;
    function DownloadAzure(NomeContainer, NomeArquivo,
      FilePath: String): boolean;
    function UploadAzure(FileName, NomeContainer, NomeArquivo: String;
      Metadados: TStrings = nil): boolean;
    constructor Create(NomeConta, ChaveConta: string);
    destructor Destroy; override;
  end;

implementation

uses
  System.Generics.Collections;

{ TCloudAzure }

function TCloudAzure.ListaContainers: TStrings;
var
  BlobService: TAzureBlobService;
  ContainerObj: TAzureContainer;
  ContainerList: TList<TAzureContainer>;
  ResponseInfo: TCloudResponseInfo;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := TStringList.Create;
  try
    try
      ContainerList := BlobService.ListContainers(nil, ResponseInfo);
      try
        if ResponseInfo.StatusCode <> 200 then
          raise Exception.Create(ResponseInfo.StatusMessage);

        for ContainerObj in ContainerList do
          Result.Add(ContainerObj.Name);

      finally
        ContainerList.Free;
      end;

    except
      on E: Exception do
      begin
        raise Exception.Create(E.Message);
      end;
    end;
  finally
    FreeAndNil(ResponseInfo);
    FreeAndNil(BlobService);
  end;
end;

function TCloudAzure.ObtemMetadadosArquivo(NomeContainer, NomeArquivo: string)
  : TStrings;
var
  BlobService: TAzureBlobService;
  ResponseInfo: TCloudResponseInfo;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := TStringList.Create;
  try
    BlobService.GetBlobMetadata(NomeContainer, NomeArquivo, Result, '', '',
      ResponseInfo);
    if ResponseInfo.StatusCode <> 200 then
      raise Exception.Create(ResponseInfo.StatusMessage);
  finally
    FreeAndNil(ResponseInfo);
    FreeAndNil(BlobService);
  end;
end;

function TCloudAzure.ObtemMetadadosContainer(NomeContainer: string): TStrings;
var
  BlobService: TAzureBlobService;
  ResponseInfo: TCloudResponseInfo;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := TStringList.Create;
  try
    BlobService.GetContainerMetadata(NomeContainer, Result, ResponseInfo);
    if ResponseInfo.StatusCode <> 200 then
      raise Exception.Create(ResponseInfo.StatusMessage);
  finally
    FreeAndNil(ResponseInfo);
    FreeAndNil(BlobService);
  end;
end;

constructor TCloudAzure.Create(NomeConta, ChaveConta: string);
begin
  FAzureCoonection := TAzureConnectionInfo.Create(nil);

  FAzureCoonection.UseDevelopmentStorage := False;
  FAzureCoonection.AccountName := NomeConta;
  FAzureCoonection.AccountKey := ChaveConta;
end;

function TCloudAzure.CriarContainer(NomeContainer: string;
  Metadados: TStrings = nil): boolean;
var
  BlobService: TAzureBlobService;
  ResponseInfo: TCloudResponseInfo;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := False;
  try
    try
      BlobService.CreateContainer(NomeContainer, Metadados,  BpaBlob,
        ResponseInfo);

      if not(ResponseInfo.StatusCode in [200, 201]) then
        raise Exception.Create(ResponseInfo.StatusMessage)
      else
        Result := True;

    except
      on E: Exception do
      begin
        raise Exception.Create(E.Message);
      end;
    end;
  finally
    FreeAndNil(BlobService);
    FreeAndNil(ResponseInfo);
  end;
end;

function TCloudAzure.DownloadAzure(NomeContainer, NomeArquivo,
  FilePath: String): boolean;
var
  BlobService: TAzureBlobService;
  ResponseInfo: TCloudResponseInfo;
  Stream: TStream;
  FS: TFileStream;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Stream := TMemoryStream.Create;
  Result := False;

  if (FilePath = EmptyStr) then
    Exit;

  try
    try
      BlobService.GetBlob(NomeContainer, NomeArquivo, Stream, '', ResponseInfo);
      if not(ResponseInfo.StatusCode in [200, 201]) then
        raise Exception.Create(ResponseInfo.StatusMessage)
      else
        Result := True;

      FS := TFileStream.Create(FilePath + '\' + NomeArquivo, fmCreate);
      Stream.Position := 0;
      FS.CopyFrom(Stream, Stream.Size);

      if not FileExists(FilePath + '\' + NomeArquivo) then
        raise Exception.Create('Download do arquivo não efetuado com sucesso.');

      FS.Free;
    except
      on E: Exception do
      begin
        raise Exception.Create(E.Message);
      end;
    end;
  finally
    FreeAndNil(BlobService);
    FreeAndNil(ResponseInfo);
    FreeAndNil(Stream);
  end;
end;

destructor TCloudAzure.Destroy;
begin
  FreeAndNil(FAzureCoonection);
end;

function TCloudAzure.ListaArquivos(NomeContainer: string): TStrings;
var
  BlobService: TAzureBlobService;
  BlobObj: TAzureBlob;
  BlobList: TList<TAzureBlob>;
  ResponseInfo: TCloudResponseInfo;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := TStringList.Create;
  try
    try
      BlobList := BlobService.ListBlobs(NomeContainer, nil, ResponseInfo);
      try
        if ResponseInfo.StatusCode <> 200 then
          raise Exception.Create(ResponseInfo.StatusMessage);

        for BlobObj in BlobList do
          Result.Add(BlobObj.Name);

      finally
        BlobList.Free;
      end;
    except
      on E: Exception do
      begin
        raise Exception.Create(E.Message);
      end;
    end;
  finally
    FreeAndNil(ResponseInfo);
    FreeAndNil(BlobService);
  end;
end;

function TCloudAzure.ObtemConteudoemBytes(const FileName: String): TBytes;
var
  FS: TFileStream;
begin
  if FileName <> EmptyStr then
  begin
    FS := TFileStream.Create(FileName, fmOpenRead);
    try
      SetLength(Result, FS.Size);
      FS.ReadBuffer(Result[0], FS.Size);
    finally
      FS.Free;
    end;
  end
  else
    SetLength(Result, 0);
end;

function TCloudAzure.UploadAzure(FileName, NomeContainer, NomeArquivo: String;
  Metadados: TStrings = nil): boolean;
var
  BlobService: TAzureBlobService;
  ResponseInfo: TCloudResponseInfo;
  Content: TBytes;
begin
  BlobService := TAzureBlobService.Create(FAzureCoonection);
  ResponseInfo := TCloudResponseInfo.Create;
  Result := False;

  if (FileName = EmptyStr) then
    Exit;

  try
    try
      Content := ObtemConteudoemBytes(FileName);

      BlobService.PutBlockBlob(NomeContainer, NomeArquivo, Content, '', nil,
        Metadados, ResponseInfo);

      if not(ResponseInfo.StatusCode in [200, 201]) then
        raise Exception.Create(ResponseInfo.StatusMessage)
      else
        Result := True;

    except
      on E: Exception do
      begin
        raise Exception.Create(E.Message);
      end;
    end;
  finally
    FreeAndNil(BlobService);
    FreeAndNil(ResponseInfo);
  end;
end;

end.
