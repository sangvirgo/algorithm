import java.util.Scanner;

public class bai1 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int a= scanner.nextInt();
        int b= scanner.nextInt();
        int c= scanner.nextInt();
        scanner.close();
        if(a+b==c) System.out.println("YES"); 
        else System.out.println("NO");
    }
}