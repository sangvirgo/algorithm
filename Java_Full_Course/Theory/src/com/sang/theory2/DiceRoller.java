package com.sang.theory2;
import java.util.Random;

public class DiceRoller {
	
	int number=0;
	Random random = new Random();
	DiceRoller() {
//		roll();
	}
	
	void roll() {
		number=random.nextInt(6)+1;
		System.out.println(number);
	}
	
	
}