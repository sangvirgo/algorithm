package com.sang.theory2;

public class Vehicle {

	double speed=0;
	String color;
	
	void go() {
		System.out.println("This vehicle is moving");
	}
	
	void stop() {
		System.out.println("This vehicle is stoped");
	}
	
	void beep() {
		System.out.println("This beep of vehicle");
	}

	Vehicle() {
	}

	Vehicle(double speed, String color) {
		this.speed = speed;
		this.color = color;
	}
	
	
}