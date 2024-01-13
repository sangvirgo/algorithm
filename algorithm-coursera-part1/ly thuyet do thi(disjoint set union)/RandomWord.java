import edu.princeton.cs.introcs.StdIn;
import edu.princeton.cs.introcs.StdOut;
import edu.princeton.cs.introcs.StdRandom;

public class RandomWord {
    public static void main(String[] args) {
        // Read the first word from standard input
        String word = StdIn.readString();

        // Print the first word
        StdOut.println(word);

        // Continue reading and printing words with a certain probability
        while (!StdIn.isEmpty()) {
            word = StdIn.readString();
            if (StdRandom.bernoulli()) {
                StdOut.println(word);
            }
        }
    }
}
