public class Pessoa{
  int idade{
    set{ 
      if (value > 0){
      idade = value;
      }
    }
    get {
      return idade;
    }
  }
}