package com.sang.theory1;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
//import javax.swing.JOptionPane;
import java.util.ArrayList;
import java.util.Random;

public class Main {
	
	public static void main(String[] args) {
		// long x=753894572384328573L;

//Trong Java, khi bạn khai báo một số nguyên, mặc định nó sẽ được coi là kiểu int. Tuy nhiên, kiểu int 
//chỉ có thể chứa các giá trị trong khoảng từ -2,147,483,648 đến 2,147,483,647. Nếu bạn muốn sử dụng một 
//giá trị lớn hơn giới hạn này, bạn cần sử dụng kiểu long, có phạm vi lớn hơn rất nhiều

		// System.out.println(x);
		
		// float y=3.14f;
//Trong Java, khi bạn khai báo một số thập phân (floating-point), mặc định nó sẽ được coi là kiểu double.
// Kiểu double có độ chính xác cao hơn và phạm vi rộng hơn so với kiểu float, nhưng cũng tốn nhiều bộ nhớ hơn.
		
		// System.out.println(y);
		
		/// scanner: input value
		// Scanner scanner = new Scanner(System.in);
		// name
// 		System.out.println("What/'s your name?");
// 		String name=scanner.nextLine();
// 		// age
// 		System.out.println("How old are you?");
// 		int age = scanner.nextInt();
// 		scanner.nextLine();
// 		// favorite 
// 		System.out.println("What's your favorite food?");
// 		String favoriteFood=scanner.nextLine();
		
// 		System.out.println("Hello "+name);
// 		System.out.println("You are "+age+" years old.");
// 		System.out.println("You like "+ favoriteFood);

// 		try {
// 			Scanner scannerFile=new Scanner(new File("/home/soang/Algorithm/Java_Full_Course/Thoery/bin/ScannerFile.txt"));
			
// 			while(scannerFile.hasNextLine()) {
// 				String line=scannerFile.nextLine();
// 				System.out.println(line);
// 			}
// 			scannerFile.close();
// 		} catch(FileNotFoundException e) {
// 			System.out.println("File not found: "+e.getMessage());
// 		}

// 		Scanner scanner = new Scanner("123 456.789 hello\nThis is a new line");
		
// 		int intValue = scanner.nextInt();
// 		double doubleValue = scanner.nextDouble();
// 		String stringValue = scanner.next();
// 		scanner.nextLine();
// 		String lineValue = scanner.nextLine();

// 		System.out.println("Integer: " + intValue);
// 		System.out.println("Double: " + doubleValue);
// 		System.out.println("String: " + stringValue);
// 		System.out.println("Line: " + lineValue);

		
// 		Scanner scanner = new Scanner("123-456-7890");

// 		String phoneNumber = scanner.findInLine("\\d{3}-\\d{3}-\\d{4}");
// 		System.out.println("Phone Number: " + phoneNumber);
		
			
// 		double x=10;
// 		int y=10;
// 		System.out.println(x/3);
// 		System.out.println((double)y/3);

		
// //		Graphical User Interface
//         String name = JOptionPane.showInputDialog("Enter your name:");

//         // Kiểm tra nếu người dùng nhấn Cancel hoặc đóng hộp thoại
//         if (name != null && !name.trim().isEmpty()) {
//             // Yêu cầu nhập tuổi và kiểm tra tính hợp lệ
//             int age = -1;
//             boolean validInput = false;
//             while (!validInput) {
//                 try {
//                     String ageStr = JOptionPane.showInputDialog("Enter your age:");
//                     if (ageStr != null && !ageStr.trim().isEmpty()) {
//                         age = Integer.parseInt(ageStr);
//                         validInput = true;
//                     } else {
//                         JOptionPane.showMessageDialog(null, "Please enter a valid age.");
//                     }
//                 } catch (NumberFormatException e) {
//                     JOptionPane.showMessageDialog(null, "Invalid age. Please enter a number.");
//                 }
//             }

//             // Hiển thị thông tin đã nhập
//             JOptionPane.showMessageDialog(null, "Hello " + name);
//             JOptionPane.showMessageDialog(null, "You are " + age + " years old");
//         } else {
//             JOptionPane.showMessageDialog(null, "You didn't enter a name.");
//         }
		
// 		Scanner scanner=new Scanner(System.in);
// 		System.out.println("Enter side x");
// 		double x=scanner.nextDouble();
// 		System.out.println("Enter side y");
// 		double y=scanner.nextDouble();
		
// 		double z=Math.sqrt((x*x)+(y*y));
// 		System.out.println("The length of the hypotenuse z is: " + z);
		
// 		scanner.close();
		
// 		System.out.println("Round up to the nearest number: " +Math.round(z));
// 		System.out.println("Round up: " +Math.ceil(z));
// 		System.out.println("Round down: " +Math.floor(z));
// 		Random random = new Random();
// 		for(int i=0; i<3; i++) {
// 			int x=random.nextInt(6)+1;
// 			double y=random.nextDouble(7);
// 			boolean z=random.nextBoolean();
// 			System.out.println(x);
// 			System.out.println(y);
// 			System.out.println(z);
// 		}
// 		// nests loop 	
// 		Scanner scanner = new Scanner(System.in);
		
// 		System.out.println("Enter row: "); int row=scanner.nextInt();
// 		System.out.println("Enter col: "); int col=scanner.nextInt(); scanner.nextLine();
// 		System.out.println("Enter symbol: "); String s=scanner.nextLine();
		
// 		for(int i=0; i<row; i++) {
// 			for(int j=0; j<col; j++) {
// 				System.out.print(s);
// 			}
// 			System.out.println();
// 		}

		
		
// 		//array
// 		String[] cars1= {"BMW", "Tesla", "Camaro", "Mes"};
// 		System.out.println(cars1.length);
		
// 		String[][] cars2 =new String[2][2];
// 		cars2[0][0]="...";

		
		// String method
		// String name="Sang";
		
//		System.out.println(name.equals("Sang"));
//		System.out.println(name.equalsIgnoreCase("Sang"));
//		lower case with upper case
//		System.out.println(name.equalsIgnoreCase("sang"));

		// System.out.println(name.length());
		// System.out.println(name.charAt(0));
		// System.out.println(name.indexOf("a"));
		// System.out.println(name.indexOf("A"));
		// System.out.println(name.isEmpty());
		
		// System.out.println(name.toLowerCase());
		// System.out.println(name.toUpperCase());

		// System.out.println("             Sang             ".trim()); // => Sang
		
		// System.out.println(name.replace('g', 'h'));

		
		
		// // Wrapper 
//		Wrapper classes trong Java được sử dụng để chuyển đổi các kiểu dữ liệu nguyên thủy (primitive types) thành các đối tượng (objects). Mỗi kiểu dữ liệu nguyên thủy có một lớp Wrapper tương ứng. Các lớp Wrapper này nằm trong gói java.lang và bao gồm:
//			primitive-> wrapper
//			byte     -> Byte
//			short    -> Short
//			int      -> Integer
//			long     -> Long
//			float    -> Float
//			double   -> Double
//			char     -> Character
//			boolean  -> Boolean
//			Tại sao sử dụng Wrapper classes?
//			Collections: Các lớp như ArrayList, HashMap không thể chứa các kiểu dữ liệu nguyên thủy, chỉ chứa các đối tượng. Vì vậy, các Wrapper classes được sử dụng để lưu trữ các giá trị nguyên thủy trong các collections này.
//			Method Arguments: Trong một số trường hợp, chúng ta cần truyền các kiểu dữ liệu nguyên thủy như là các đối tượng. Wrapper classes giúp thực hiện điều này.
//			Utilities Methods: Các lớp Wrapper cung cấp nhiều phương thức hữu ích để chuyển đổi, so sánh, và thao tác với các giá trị nguyên thủy.
//			Autoboxing và Unboxing
//			Java tự động chuyển đổi giữa các kiểu dữ liệu nguyên thủy và các lớp Wrapper tương ứng thông qua hai khái niệm: Autoboxing và Unboxing.
//
//			Autoboxing: Chuyển đổi tự động từ kiểu dữ liệu nguyên thủy thành đối tượng của lớp Wrapper.
//			Unboxing: Chuyển đổi tự động từ đối tượng của lớp Wrapper về kiểu dữ liệu nguyên thủy.
		
//		example:
		
//		Autoboxing
//		int num=10;
//		Integer obj=num;
//		
////		Unboxing
//		Integer num1=new Integer(20);
//		int num2=num1;
//		
//		// use the method in wrapper
//		Integer a=20;
//		Integer b=30;
//		Integer c=Integer.sum(a, b);
//		System.out.println(c);
		
        // Chuyển đổi chuỗi thành kiểu nguyên thủy
//         String str = "123";
//         int num = Integer.parseInt(str);
//         System.out.println("Converted int: " + num);

//         // Chuyển đổi chuỗi thành đối tượng Wrapper
//         String str2 = "45.67";
//         Double doubleObj = Double.valueOf(str2);
//         System.out.println("Converted Double: " + doubleObj);

//         // So sánh các giá trị
//         Integer a = 100;
//         Integer b = 200;
//         int comparison = a.compareTo(b); // So sánh a với b
//         System.out.println("Comparison result: " + comparison); // -1 vì a < b

		
// //		arrayList
// //		ArrayList là một lớp trong Java thuộc gói java.util, cung cấp một triển khai của giao diện List. ArrayList sử dụng một mảng động để lưu trữ các phần tử. Dưới đây là một số đặc điểm và tính năng chính của ArrayList:
// //
// //		Kích thước linh hoạt: ArrayList có khả năng tự động thay đổi kích thước khi bạn thêm hoặc xóa phần tử.
// //		Truy cập ngẫu nhiên: Bạn có thể truy cập trực tiếp vào bất kỳ phần tử nào bằng chỉ số của nó, vì ArrayList hỗ trợ truy cập ngẫu nhiên.
// //		Hiệu năng: Việc truy cập và cập nhật phần tử có hiệu suất cao (O(1)), nhưng việc chèn và xóa phần tử (đặc biệt là ở giữa danh sách) có thể chậm hơn so với một số cấu trúc dữ liệu khác (O(n)) do cần phải dịch chuyển các phần tử khác.
	
// 		ArrayList<String> foods = new ArrayList<>();
		
// 		foods.add("Pizza");
// 		foods.add("Hotdog");
// 		foods.add("Orange");
		
// 		foods.set(0, "Banana");
// 		foods.remove(2);
		
// //		System.out.println(foods.get(1));
// //		foods.clear();
		
// 		for(String food: foods) {
// 			System.out.println(food);
// 		}

// //		2D Array List
// 		 ArrayList<String> fruits = new ArrayList<>();
// 	        ArrayList<String> vegetables = new ArrayList<>();
// 	        ArrayList<String> meats = new ArrayList<>();
	        
// 	        // Thêm giá trị vào ArrayList fruits
// 	        fruits.add("Apple");
// 	        fruits.add("Banana");
// 	        fruits.add("Orange");
	        
// 	        // Thêm giá trị vào ArrayList vegetables
// 	        vegetables.add("Carrot");
// 	        vegetables.add("Broccoli");
// 	        vegetables.add("Spinach");
	        
// 	        // Thêm giá trị vào ArrayList meats
// 	        meats.add("Chicken");
// 	        meats.add("Beef");
// 	        meats.add("Pork");
	        
// 	        ArrayList<ArrayList<String>> foods=new ArrayList();
	        
// 	        foods.add(meats);
// 	        foods.add(fruits);
// 	        foods.add(vegetables);
	        
// 	        for(ArrayList food: foods) {
// 	        	System.out.println(food);
// 	        }
			
// 			int[] digits = {1, 3, 5, 3};
// 			String name="Sang";
// 			int age=21;
			
// 	        hello(name, age);

		
// //		Overloading: Methods that share the same name but have different parameters 
// //		method name+ parameters=methods signature
		
// 		System.out.println(add(5, 6));
// 		System.out.println(add(5, 3, 8));
		 
		
// 		//Printf
// //		Chuỗi (String): %s
// //		so nguyên (int, long, short, byte): %d
// //		Số thực (float, double): %f
// //		Số thực với số chữ số thập phân cụ thể: %.nf
// //		Số nguyên không dấu (octal): %o
// //		Ký tự (char): %c
// //		Boolean: %b hoặc %B
		
// //		System.out.printf("This is a format string %d", 123);
// //		System.out.printf("format", args);
		
// 		boolean myBoolean=true;
// 		char myChar='S';
// 		String myString="Tao ten Sang";
// 		int myInt=244;
// 		int myIntLarge=351551613;
// 		double myDouble=3.354335;
// 		System.out.printf("This is boolean: %b\nThis is char: %c\nThis is double: %.3f\n", myBoolean, myChar, myDouble);
// //		flag
// 		System.out.printf("This is int: |%-10d|\n", myInt);
		
// 		System.out.printf("This is int: |%+d|\n", myInt);
// 		System.out.printf("This is int: |%+d|\n", -myInt);

// 		System.out.printf("This is int: |%010d|\n", myInt);
		
// 		System.out.printf("This is int: |%,10d|\n", myIntLarge);

//		1. final với Biến
//		Ý nghĩa: Khi một biến được khai báo là final, giá trị của biến đó không thể thay đổi sau khi được gán lần đầu tiên. Biến final phải được khởi tạo ngay khi khai báo hoặc trong khối khởi tạo của lớp.
//
//		2. final với Phương thức
//		Ý nghĩa: Khi một phương thức được khai báo là final, nó không thể bị ghi đè (override) bởi các lớp con. Điều này giúp bảo vệ hành vi của phương thức không bị thay đổi bởi các lớp kế thừa.
//	
//		3. final với Lớp
//		Ý nghĩa: Khi một lớp được khai báo là final, nó không thể được kế thừa. Điều này có nghĩa là bạn không thể tạo ra lớp con từ lớp final.
//
//		4. final với Tham số của Phương thức
//		Ý nghĩa: Khi một tham số của phương thức được khai báo là final, giá trị của tham số đó không thể thay đổi trong phương thức. Điều này giúp đảm bảo rằng tham số không bị thay đổi trong quá trình thực thi của phương thức.
	}
/*
		static void hello(String name, int age) {
			System.out.println("Hello " + name);
			System.out.println("Your age is " + age);
		}
	
		static int add(int a, int b) {
			System.out.println("This is overloaded method #1");
			return a+b;
		}
		
		static int add(int a, int b, int c) {
			System.out.println("This is overloaded method #2");
			return a+b+c;
 */
//		}
}