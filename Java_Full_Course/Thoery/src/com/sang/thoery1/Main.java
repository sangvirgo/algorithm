package com.sang.thoery1;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import javax.swing.JOptionPane;
import java.util.Random;

public class Main {
	
	public static void main(String[] args) {
		/*
		long x=753894572384328573L;

//Trong Java, khi bạn khai báo một số nguyên, mặc định nó sẽ được coi là kiểu int. Tuy nhiên, kiểu int 
//chỉ có thể chứa các giá trị trong khoảng từ -2,147,483,648 đến 2,147,483,647. Nếu bạn muốn sử dụng một 
//giá trị lớn hơn giới hạn này, bạn cần sử dụng kiểu long, có phạm vi lớn hơn rất nhiều

		System.out.println(x);
		
		float y=3.14f;
//Trong Java, khi bạn khai báo một số thập phân (floating-point), mặc định nó sẽ được coi là kiểu double.
// Kiểu double có độ chính xác cao hơn và phạm vi rộng hơn so với kiểu float, nhưng cũng tốn nhiều bộ nhớ hơn.
		
		System.out.println(y);
		
		/// scanner: input value
		Scanner scanner = new Scanner(System.in);
		// name
		System.out.println("What/'s your name?");
		String name=scanner.nextLine();
		// age
		System.out.println("How old are you?");
		int age = scanner.nextInt();
		scanner.nextLine();
		// favorite 
		System.out.println("What's your favorite food?");
		String favoriteFood=scanner.nextLine();
		
		System.out.println("Hello "+name);
		System.out.println("You are "+age+" years old.");
		System.out.println("You like "+ favoriteFood);

		try {
			Scanner scannerFile=new Scanner(new File("/home/soang/Algorithm/Java_Full_Course/Thoery/bin/ScannerFile.txt"));
			
			while(scannerFile.hasNextLine()) {
				String line=scannerFile.nextLine();
				System.out.println(line);
			}
			scannerFile.close();
		} catch(FileNotFoundException e) {
			System.out.println("File not found: "+e.getMessage());
		}

		Scanner scanner = new Scanner("123 456.789 hello\nThis is a new line");
		
		int intValue = scanner.nextInt();
		double doubleValue = scanner.nextDouble();
		String stringValue = scanner.next();
		scanner.nextLine();
		String lineValue = scanner.nextLine();

		System.out.println("Integer: " + intValue);
		System.out.println("Double: " + doubleValue);
		System.out.println("String: " + stringValue);
		System.out.println("Line: " + lineValue);

		
		Scanner scanner = new Scanner("123-456-7890");

		String phoneNumber = scanner.findInLine("\\d{3}-\\d{3}-\\d{4}");
		System.out.println("Phone Number: " + phoneNumber);
		
			
		double x=10;
		int y=10;
		System.out.println(x/3);
		System.out.println((double)y/3);

		
//		Graphical User Interface
        String name = JOptionPane.showInputDialog("Enter your name:");

        // Kiểm tra nếu người dùng nhấn Cancel hoặc đóng hộp thoại
        if (name != null && !name.trim().isEmpty()) {
            // Yêu cầu nhập tuổi và kiểm tra tính hợp lệ
            int age = -1;
            boolean validInput = false;
            while (!validInput) {
                try {
                    String ageStr = JOptionPane.showInputDialog("Enter your age:");
                    if (ageStr != null && !ageStr.trim().isEmpty()) {
                        age = Integer.parseInt(ageStr);
                        validInput = true;
                    } else {
                        JOptionPane.showMessageDialog(null, "Please enter a valid age.");
                    }
                } catch (NumberFormatException e) {
                    JOptionPane.showMessageDialog(null, "Invalid age. Please enter a number.");
                }
            }

            // Hiển thị thông tin đã nhập
            JOptionPane.showMessageDialog(null, "Hello " + name);
            JOptionPane.showMessageDialog(null, "You are " + age + " years old");
        } else {
            JOptionPane.showMessageDialog(null, "You didn't enter a name.");
        }
		
		Scanner scanner=new Scanner(System.in);
		System.out.println("Enter side x");
		double x=scanner.nextDouble();
		System.out.println("Enter side y");
		double y=scanner.nextDouble();
		
		double z=Math.sqrt((x*x)+(y*y));
		System.out.println("The length of the hypotenuse z is: " + z);
		
		scanner.close();
		
		System.out.println("Round up to the nearest number: " +Math.round(z));
		System.out.println("Round up: " +Math.ceil(z));
		System.out.println("Round down: " +Math.floor(z));
		Random random = new Random();
		for(int i=0; i<3; i++) {
			int x=random.nextInt(6)+1;
			double y=random.nextDouble(7);
			boolean z=random.nextBoolean();
			System.out.println(x);
			System.out.println(y);
			System.out.println(z);
		}
*/
		
	}
}