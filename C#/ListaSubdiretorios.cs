using System;
using System.IO;

class ListaSubdiretorios{
  public static void Main(string [] a){
    string[] sub = Directory.GetDirectories(@"D:\Arquivos de Programas");
    foreach(string i in sub){
      Console.WriteLine(i);
    }
    Console.ReadKey();
  }
}