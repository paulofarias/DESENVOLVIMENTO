using System;
using System.Data.SqlClient;

class ExemploClasseConnection{
  public static void Main(string [] a){
    exemploConexao();
    Console.ReadKey();
  }
  
  public static void exemploConexao(){
    SqlConnection conexao;
    try{
      //conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=DESKTOP-OC9BR8Q\SQLEXPRESS; User Id=sa; Password=masterkey;");
      conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=127.0.0.1; User Id=sa; Password=masterkey;");
      conexao.Open();
      Console.WriteLine("Conectado!");
    } catch(Exception e){
      //conexao.Close();
      Console.WriteLine("Erro: " + e.Message);
    }
  }
}