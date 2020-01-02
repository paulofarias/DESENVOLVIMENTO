using System;
using System.Data.SqlClient;

public class ExemploExecuteScalar{
  public static void Main(string [] a){
    TestaExecuteScalar();
    Console.ReadKey();
  }
  
  static void TestaExecuteScalar(){
    SqlConnection conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=10.1.2.2; User Id=sa; Password=masterkey;");
    conexao.Open();
    SqlCommand comando = new SqlCommand("SELECT COUNT(*) FROM TG14", conexao);
    int quantidade = Convert.ToInt32(comando.ExecuteScalar());
    Console.WriteLine("Existem " + quantidade.ToString() + " bancos cadastrados");
  }
}