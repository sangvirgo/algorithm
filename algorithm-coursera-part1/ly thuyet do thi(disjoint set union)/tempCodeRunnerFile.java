import edu.princeton.cs.introcs.StdIn;
import edu.princeton.cs.introcs.StdRandom;

public class RandomWord {
    public static void main(String[] args) {
        while (!StdIn.isEmpty()) {
            String word = StdIn.readString();
            if (StdRandom.bernoulli()) {
                System.out.println(word);
            }
        }
    }
}
