using System.IO;
using System;

class TesteFileStream{
  public static void Main(string[] a){
    string dadosDoArquivo;
    StreamReader sr;
    
    sr = new StreamReader(@"D:\DESENVOLVIMENTO\C#\dados01.txt", true);
    dadosDoArquivo = sr.ReadToEnd();
    
    Console.Write(dadosDoArquivo);
    Console.ReadKey();
  }
}