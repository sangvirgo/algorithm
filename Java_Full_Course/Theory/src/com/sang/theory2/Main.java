package com.sang.theory2;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		/*
		DiceRoller diceRoller= new DiceRoller();
		diceRoller.roll();
		
		//overloading constructors
		Pizza pizza1 =new Pizza("hihhihi", "shfja");
		System.out.println(pizza1.getBread()+ " " + pizza1.getSauce()+ " " + pizza1.getCheese());
		
		Pizza pizza2= new Pizza("fhsjdh", "sfh", "hasf");
		System.out.println(pizza2.getBread()+ " " + pizza2.getSauce()+ " " + pizza2.getCheese());
		
//		array of objects
		
		Car car = new Car("BMW");
		Garage garage= new Garage();
		
		garage.Park(car);
		garage.Park(new Car("Mercedes"));
		
		
		//static keyword
//		Trong ngôn ngữ lập trình Java, private static final int MAX_SPEED = 110; có ý nghĩa như sau:
//		private: Đây là từ khóa chỉ rằng biến MAX_SPEED chỉ có thể truy cập trong cùng một class. Nó không thể được truy cập từ bên ngoài class đó.
//		static: Từ khóa này biểu thị rằng biến MAX_SPEED thuộc về lớp (class) chứ không phải của các đối tượng (objects) được tạo từ lớp đó. Nó có nghĩa là chỉ có một bản sao của biến MAX_SPEED tồn tại cho mỗi lớp, không phụ thuộc vào số lượng đối tượng của lớp đó.
//		final: Từ khóa này chỉ rằng giá trị của biến MAX_SPEED không thể thay đổi sau khi đã được gán một giá trị. Một khi đã gán giá trị MAX_SPEED = 110;, thì không thể gán lại giá trị mới cho biến này.
//		int: Đây là kiểu dữ liệu của biến MAX_SPEED, có nghĩa là biến này là một số nguyên.
//		MAX_SPEED = 110;: Đây là giá trị được gán cho biến MAX_SPEED, có nghĩa là MAX_SPEED có giá trị là 110.
	
		//khi tạo method trong class, khi gọi lại chỉ cần: NameClass.Method();
		
		
		
//		4 THUỘC TÍNH QUAN TRỌNG TRONG OOP
		
		
//		1. Tính Đóng Gói (Encapsulation)
//		Định nghĩa: Tính đóng gói là quá trình ẩn giấu các dữ liệu và chi tiết thực hiện của một đối tượng, chỉ để lộ những gì cần thiết. Điều này giúp bảo vệ dữ liệu khỏi sự truy cập và thay đổi trực tiếp từ bên ngoài.
//
//		Cách thực hiện trong Java:
//
//		Sử dụng các từ khóa private, protected, và public để kiểm soát quyền truy cập vào các thành phần của lớp.
//		Sử dụng các phương thức getter và setter để truy cập và thay đổi giá trị của các thuộc tính.
//		
		
//		2. Tính Kế Thừa (Inheritance)
//		Định nghĩa: Tính kế thừa cho phép một lớp con (subclass) kế thừa các thuộc tính và phương thức của một lớp cha (superclass). Điều này giúp tái sử dụng mã và tạo ra một hệ thống phân cấp lớp.
//		Cách thực hiện trong Java:
//		Sử dụng từ khóa extends để chỉ định một lớp kế thừa từ một lớp khác.
		
		
//		3. Tính Đa Hình (Polymorphism)
//		Định nghĩa: Tính đa hình cho phép một đối tượng thể hiện nhiều hình thức khác nhau. Có hai loại đa hình: Đa hình lúc biên dịch (Compile-time Polymorphism) và Đa hình lúc thực thi (Run-time Polymorphism).
//		Compile-time Polymorphism (Method Overloading):
//		Nhiều phương thức cùng tên nhưng khác tham số trong cùng một lớp.
//		Ví dụ:
//		public class MathOperation {
//		    public int add(int a, int b) {
//		        return a + b;
//		    }
//
//		    public double add(double a, double b) {
//		        return a + b;
//		    }
//		}
//		Run-time Polymorphism (Method Overriding):
//		Ghi đè phương thức của lớp cha trong lớp con.
//		Ví dụ:
//
//		public class Animal {
//		    public void sound() {
//		        System.out.println("Animal makes a sound");
//		    }
//		}
//
//		public class Dog extends Animal {
//		    @Override
//		    public void sound() {
//		        System.out.println("Dog barks");
//		    }
//		}
//
//		public class Main {
//		    public static void main(String[] args) {
//		        Animal animal = new Dog();
//		        animal.sound(); // Gọi phương thức của lớp Dog
//		    }
//		}
		
//		4. Tính Trừu Tượng (Abstraction)
//		Định nghĩa: Tính trừu tượng là quá trình ẩn giấu các chi tiết thực hiện và chỉ hiển thị các chức năng của đối tượng. 
// * Điều này giúp giảm thiểu sự phức tạp và tập trung vào những gì đối tượng làm thay vì cách nó làm.

//		Cách thực hiện trong Java:
//
//		Sử dụng các lớp trừu tượng (abstract class) và giao diện (interface).
//		Ví dụ với abstract class:
//
//		java
//		Copy code
//		abstract class Animal {
//		    public abstract void sound();
//
//		    public void sleep() {
//		        System.out.println("This animal sleeps");
//		    }
//		}
//
//		public class Dog extends Animal {
//		    @Override
//		    public void sound() {
//		        System.out.println("Dog barks");
//		    }
//		}
//		Ví dụ với interface:
//
//		java
//		Copy code
//		interface Animal {
//		    void sound();
//		    void sleep();
//		}
//
//		public class Dog implements Animal {
//		    @Override
//		    public void sound() {
//		        System.out.println("Dog barks");
//		    }
//
//		    @Override
//		    public void sleep() {
//		        System.out.println("Dog sleeps");
//		    }
//		}
//		Tổng Kết
//		Tính đóng gói giúp bảo vệ dữ liệu và giảm sự phụ thuộc giữa các thành phần.
//		Tính kế thừa giúp tái sử dụng mã và tạo ra hệ thống phân cấp lớp.
//		Tính đa hình cho phép một đối tượng thể hiện nhiều hình thức khác nhau, giúp tăng tính linh hoạt của mã.
//		Tính trừu tượng giúp giảm sự phức tạp bằng cách ẩn giấu các chi tiết thực hiện và chỉ hiển thị các chức năng cần thiết.
		// inheritance
		
		Car car1=new Car();
		car1.stop();
		Bicycle bicycle1=new Bicycle();
		bicycle1.go();
		
		Vehicle vehicle1=new Vehicle();
		
		
		//method overriding
		vehicle1.beep();
		bicycle1.beep();
		
//		SUPER KEYWORD
		Car car1=new Car("Sang", 145, "White");
		
		System.out.println(car1.getName()+" "+car1.speed+" "+car1.color);
		
//		ABSTRACTION 
		Dog dog1=new Dog();
		dog1.makeSound();
		dog1.spleep();

		
//		Access modifiers
		
//		Modifier   Class	 Package	Subclass	World
//		public		 Y			Y		   Y		  Y
//		protected	 Y			Y		   Y		  N
//		default		 Y			Y		   N		  N
//		private		 Y			N		   N		  N
		
		Dog dog1=new Dog();
		System.out.println(dog1);


//		Khi bạn copy một đối tượng trong Java, việc sử dụng phép gán đơn giản như car1 = car2 không
//		tạo ra một bản sao của đối tượng. Thay vào đó, nó chỉ sao chép tham chiếu (reference) của đối 
//		tượng, nghĩa là car1 và car2 sẽ cùng tham chiếu đến cùng một đối tượng trong bộ nhớ. Do đó, mọi thay đổi đối với car1 sẽ ảnh hưởng đến car2 và ngược lại.
//				class Car {
//				    String model;
//
//				    Car(String model) {
//				        this.model = model;
//				    }
//				}
//
//				public class Main {
//				    public static void main(String[] args) {
//				        Car car1 = new Car("Toyota");
//				        Car car2 = car1;
//
//				        car2.model = "Honda";
//
//				        System.out.println(car1.model); // Output: Honda
//				        System.out.println(car2.model); // Output: Honda
//				    }
//				}
//				Trong ví dụ này, cả car1 và car2 đều tham chiếu đến cùng một đối tượng. Khi bạn thay đổi model của car2, model của car1 cũng thay đổi vì cả hai đều tham chiếu đến cùng một đối tượng.
//
//				Tạo Bản Sao Độc Lập
//				Để tạo một bản sao độc lập của đối tượng, bạn cần thực hiện một trong những cách sau:
//
//				Sử dụng Constructor Sao Chép (Copy Constructor):
//
//				Tạo một constructor mới trong lớp của bạn mà sao chép giá trị của các thuộc tính từ đối tượng cũ sang đối tượng mới.
//				class Car {
//				    String model;
//
//				    Car(String model) {
//				        this.model = model;
//				    }
//
//				    // Constructor sao chép
//				    Car(Car car) {
//				        this.model = car.model;
//				    }
//				}
//
//				public class Main {
//				    public static void main(String[] args) {
//				        Car car1 = new Car("Toyota");
//				        Car car2 = new Car(car1); // Sử dụng constructor sao chép
//
//				        car2.model = "Honda";
//
//				        System.out.println(car1.model); // Output: Toyota
//				        System.out.println(car2.model); // Output: Honda
//				    }
//				}
		
//		POLYMORPHISM
		Car car1=new Car();
		Bicycle bicycle1=new Bicycle();
		Boat boat1=new Boat();
		
		Vehicle[] racers= {car1, bicycle1, boat1};
		
		for(Vehicle x: racers) {
			x.go();
		}
		
		
		Animal animal;
		Scanner scanner=new Scanner(System.in);
		
		System.out.println("What animal do you want?");
		System.out.println("1.Dog         2.Cat");
		int choice=scanner.nextInt();
		
		if(choice==1) {
			animal=new Dog();
			animal.speak();
		} else if(choice==2) {
			animal=new Cat();
			animal.speak();
		} else {
			animal=new Animal();
			animal.speak();
		}
		 */
		
//		try catch 
//		khi co loi thi nen try catch 
//		catch(loi xuat hien e) ...
	}

}