using System.Text;
using System.IO;
using System;

class TesteFileStream01{
  public static void Main(string[] a){
    byte[] ba;
    UnicodeEncoding ue;
    FileStream fs;

    ue = new UnicodeEncoding();
    
    fs = new FileStream(@"D:\DESENVOLVIMENTO\C#\TesteFileStream01.txt", FileMode.Create, FileAccess.ReadWrite);

    ba = ue.GetBytes("Meu arquivo de dados.");
    
    fs.Write(ba, 0, ba.Length);
    
    fs.Close();
        
    Console.ReadKey();
  }
}