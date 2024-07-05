package com.sang.thoery1;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

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
		 */
		
		
		double x=10;
		int y=10;
		System.out.println(x/3);
		System.out.println((double)y/3);
		
		
		
		
		
	}
}