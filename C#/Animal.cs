namespace Animal {
  abstract class Animal{
    public void emitirSom();
  }

  public class Cachorro: Animal{
    public override void emitirSom(){
      Console.WriteLine("Au Au");
    } 
  }

  public static void Main(string[] a){
    Cachorro dog = new Cachorro();
    dog.emitirSom();
  }
}