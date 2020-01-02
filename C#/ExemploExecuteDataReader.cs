using System;
using System.Data.SqlClient;

public class ExemploExecuteDataReader{
  public static void Main(string [] a){
    TestaDataReader();
    Console.ReadKey();
  }
  
  static void TestaDataReader(){
    SqlConnection conexao = new SqlConnection(@"Initial Catalog=TESTE; Data Source=10.1.2.2; User Id=sa; Password=masterkey;");
    conexao.Open();
    SqlCommand comando = new SqlCommand("SELECT * FROM TG14", conexao);
    SqlDataReader reader = comando.ExecuteReader();
    object field;
    while(reader.Read()){
      for(int i = 0; i < reader.FieldCount; i++){
        field = reader.GetSqlValue(i);
        Console.Write(field.ToString());
        Console.Write("  ");
      }
      Console.WriteLine();
    }
    Console.ReadKey();
  }
}