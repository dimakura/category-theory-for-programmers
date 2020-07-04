// javac Prog.java
// java Prog

public class Prog {
  public static void main(String[] args) {
    System.out.println("id(1) = " + id(1));
    System.out.println("id(life) = " + id("life"));
  }

  public static <T> T id(T x) {
    return x;
  }
}