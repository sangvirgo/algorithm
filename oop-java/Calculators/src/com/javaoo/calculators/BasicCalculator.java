package com.javaoo.calculators;

public class BasicCalculator {
	public final double add(double a, double b) {
		return a+b;
	}
	
	public final double subtract(double a, double b) {
		return a-b;
	}
	
	public final double multiply(double a, double b) {
		return a*b;
	}
	
	public final double divide(double a, double b) {
		return a/b;
	}
	
	
}

/*
1. final
Từ khóa final có thể được sử dụng với lớp, phương thức, và biến.
Lớp: Một lớp được khai báo là final không thể bị kế thừa.
Phương thức: Một phương thức được khai báo là final không thể bị ghi đè bởi các lớp con.
Biến: Một biến được khai báo là final không thể được thay đổi sau khi đã khởi tạo.
2. static
Từ khóa static có thể được sử dụng với biến, phương thức, khối lệnh, và lớp lồng nhau.
Biến: Một biến tĩnh là biến chung của lớp, được chia sẻ bởi tất cả các đối tượng của lớp đó.
Phương thức: Một phương thức tĩnh là phương thức của lớp, có thể được gọi mà không cần tạo đối tượng.
Khối lệnh tĩnh: Một khối lệnh tĩnh được thực thi khi lớp được nạp vào bộ nhớ.
Lớp lồng nhau tĩnh: Một lớp lồng nhau tĩnh là lớp có thể được khai báo mà không cần tạo đối tượng của lớp bên ngoài.


Tại sao sử dụng final: Để đảm bảo rằng các phương thức này không bị ghi đè bởi các lớp con. Điều này có thể hữu ích nếu bạn muốn bảo 
vệ các phương thức này khỏi bị thay đổi hành vi bởi các lớp con, giữ cho các phép tính cơ bản được thực hiện một cách nhất quán.

 * */