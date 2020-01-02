using Operacoes.dll;
using System;

public class Calculadora{
  public static void Main(string[] a){
    int res;
    res = Operacao.Soma(5, 5);
    Console.WriteLine("Resultado {0}", res);
    Console.ReadKey();
  }
}