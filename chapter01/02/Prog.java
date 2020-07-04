import java.util.function.Function;

// javac Prog.java
// java Prog

public class Prog {
  public static void main(String[] args) {
    Function<String, Integer> length = s -> s.length();
    Function<Integer, Boolean> isEmpty = l -> l == 0;
    var isEmptyString = compose(isEmpty, length);
    System.out.println(isEmptyString.apply(""));
    System.out.println(isEmptyString.apply("nest"));
  }

  public static <A, B, C> Function<A, C> compose(Function<B, C> g, Function<A, B> f) {
    return (A a) -> g.apply(f.apply(a));
  }
}