package com.sang.theory2;

public class Bicycle extends Vehicle{
	void beep() {
		//SUPER
//		2. Gọi Phương Thức của Lớp Cha
//		Nếu lớp con ghi đè (override) một phương thức của lớp cha, bạn có thể sử dụng super để gọi phương thức của lớp cha từ trong lớp con.
		super.beep();
//		3. Truy Cập Thuộc Tính của Lớp Cha
//		Nếu lớp con có một thuộc tính trùng tên với thuộc tính của lớp cha, bạn có thể sử dụng super để truy cập thuộc tính của lớp cha.
		System.out.println("Truy Cập Thuộc Tính của Lớp Cha. VD: "+ super.color);
		
		System.out.println("This is beep of bicycle");
	}
	
	public void go() {
		System.out.println("The Bicycle is begins moving");
	}
}
