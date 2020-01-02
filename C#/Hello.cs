/* Meu primeiro programa em C# */
using System;

class Hello{
  public static void Main(String [] a){
    string nome;
    int idade;
    // Delimitador
    string delimitador = "::==================================================::";
    string tituloSistema = "::             Sistema de teste em C#               ::";
    // Pega e mostra a data
    string dataHora = "::              "+DateTime.Now+"                 ::";
    Console.WriteLine("{0}\n{1}\n{2}\n{0}", delimitador, tituloSistema, dataHora, delimitador);
    Console.Write("Informar o nome: ");
    nome = Console.ReadLine();
    Console.Write("Informar a idade: ");
    idade = Convert.ToInt32(Console.ReadLine());
    if (nome == "ok") {
      goto y;
    }
    // Exibe a mensagem de boas vindas
    Console.WriteLine("Seu nome é {0} com idade {1}.", nome, idade);
    y: Console.Write(delimitador);
    Console.ReadKey();
  }
}