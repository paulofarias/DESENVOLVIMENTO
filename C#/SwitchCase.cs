using System;

class SwitchCase{
  public static void Main(string[] a){
    int dia;
    //Console.Write("Digite o dia correspondente: ");
    dia = 6;//Convert.ToInt32(Console.Read());
    Console.WriteLine("Dia: {0}", dia);
    switch(dia){
      case 1:
        Console.WriteLine("Segunda");
        break;
      case 2:
        Console.WriteLine("Terça");
        break;
      case 3:
        Console.WriteLine("Quarta");
        break;
      case 4:
        Console.WriteLine("Quinta");
        break;
      case 5:
        Console.WriteLine("Sexta");
        break;
      case 6:
        Console.WriteLine("Sabado");
        break;
      case 7:
        Console.WriteLine("Domingo");
        break;
    }
    Console.ReadKey();
  }
}