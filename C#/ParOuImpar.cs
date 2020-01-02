using System;

class ParOuImpar{
  public static void Main(String [] a){
    int qtPar = 0;
    int qtImpar = 0;
    int[] arr = new int[] {0, 1, 2, 5, 7, 8, 9, 11};
    
    foreach(int i in arr){
      if (i%2 == 0){
        qtPar++;
      } else {
        qtImpar++;  
      }
    }
    Console.WriteLine("Quantidade de pares: {0}.\nQuantidade de impares: {1}.", qtPar, qtImpar);
    Console.ReadKey();
  }
}