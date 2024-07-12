import java.util.Scanner;
import java.util.Vector;

public class bai2 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int t=scanner.nextInt();
        Vector<Integer> v=new Vector<>(t);

        for(int i=0; i<t; i++) {
            int n=scanner.nextInt();
            v.add(n);
        }
        scanner.close();
        int sum=0;
        for(int i=0; i<t-1; i++) {
            sum+=v.get(i)*v.get(i+1);
        }

        System.out.println(sum);
    }
}
