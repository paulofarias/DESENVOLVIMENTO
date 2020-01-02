using System;
using System.Data.SqlClient;

class ExemploClasseCommand{
  public static void Main(string [] a){
    exemploCommand();
    Console.ReadKey();
  }
  
  public static void exemploCommand(){
    SqlConnection conexao;
    try{
      //conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=DESKTOP-OC9BR8Q\SQLEXPRESS; User Id=sa; Password=masterkey;");
      conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=10.1.2.2; User Id=sa; Password=masterkey;");
      conexao.Open();
      Console.WriteLine("Conectado!");
      SqlCommand comando = new SqlCommand("INSERT INTO TG14 VALUES (999, 'NOVO BANCO', 'S', NULL)", conexao);
      int linhasAfetadas = comando.ExecuteNonQuery();
      Console.WriteLine(linhasAfetadas.ToString() + " linhas afetadas");
    } catch(Exception e){
      //conexao.Close();
      Console.WriteLine("Erro: " + e.Message);
    }
  }
}