object DmRelatorios: TDmRelatorios
  OldCreateOrder = False
  Height = 270
  Width = 515
  object sqlRecibos: TSQLQuery
    MaxBlobSize = -1
    Params = <
      item
        DataType = ftInteger
        Name = 'prm'
        ParamType = ptInput
      end>
    SQL.Strings = (
      'select * from recibos where id = :prm')
    SQLConnection = DmDados.SQLConnection
    Left = 320
    Top = 104
    object sqlRecibosid: TIntegerField
      FieldName = 'id'
      Required = True
    end
    object sqlRecibostipo_recibo: TIntegerField
      FieldName = 'tipo_recibo'
      Required = True
    end
    object sqlRecibosdt_emissao: TDateField
      FieldName = 'dt_emissao'
      Required = True
    end
    object sqlRecibosnome: TStringField
      FieldName = 'nome'
      Required = True
      Size = 100
    end
    object sqlRecibosvlr_recibo: TFMTBCDField
      FieldName = 'vlr_recibo'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object sqlRecibosreferente: TStringField
      FieldName = 'referente'
      Required = True
      Size = 100
    end
    object sqlRecibosobservacao: TStringField
      FieldName = 'observacao'
      Size = 255
    end
    object sqlRecibosemitente: TStringField
      FieldName = 'emitente'
      Required = True
      Size = 100
    end
    object sqlRecibosendereco: TStringField
      FieldName = 'endereco'
      Size = 100
    end
    object sqlReciboscpf_cnpj: TStringField
      FieldName = 'cpf_cnpj'
      Size = 30
    end
    object sqlReciboscidade: TStringField
      FieldName = 'cidade'
      Size = 100
    end
    object sqlRecibosdt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Required = True
    end
    object sqlReciboshr_cadastro: TTimeField
      FieldName = 'hr_cadastro'
      Required = True
    end
    object sqlRecibosuser_cadastro: TStringField
      FieldName = 'user_cadastro'
      Required = True
      Size = 50
    end
  end
end
