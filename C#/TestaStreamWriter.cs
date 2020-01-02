using System.IO;
using System;
class TestaStreamWriter{
  public static void Main(string [] a){
    string op;
    Console.Write("Informar a opção desejada: ");
    op = Console.ReadLine();
    if (op == "1") {
      proTesta();
    } else if (op == "2") {
      proLer();
      Console.ReadKey();
    }
  }
  public static void proTesta(){
    StreamWriter sw = new StreamWriter(@"D:\DESENVOLVIMENTO\C#\TestaStreamWriter.txt", true);
    sw.WriteLine("Olá pessoal.");
    sw.Close();
  }
  public static void proLer(){
    string textoArquivo;
    StreamReader sr = new StreamReader(@"D:\DESENVOLVIMENTO\C#\TestaStreamWriter.txt", true);
    textoArquivo = sr.ReadToEnd();
    sr.Close();
    Console.Write(textoArquivo);
  }
}