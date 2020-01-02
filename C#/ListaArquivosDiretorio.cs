using System;
using System.IO;

class Programa{
  public static void Main(string [] a){
    string[] arrFiles = Directory.GetFiles("D:\\DESENVOLVIMENTO\\C#");
    foreach(string strFile in arrFiles){
      Console.WriteLine(strFile);
    }
    Console.ReadKey();
  }
}