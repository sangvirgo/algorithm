package com.sang.theory2;

public class Car extends Vehicle {
	private String name="Sang";

	public Car() {
		super();
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Car(String name) {
		this.name = name;
	}

	
//	1. Gọi Constructor của Lớp Cha
//	Khi tạo một đối tượng của lớp con, constructor của lớp cha phải được gọi trước khi constructor của lớp con được thực
//	thi. Điều này có thể được thực hiện rõ ràng bằng cách sử dụng từ khóa super.
	public Car(String name, double speed, String color) {
		super(speed, color);
		this.name = name;
	}
	public void go() {
		System.out.println("The Car is begins moving");
	}
	
}