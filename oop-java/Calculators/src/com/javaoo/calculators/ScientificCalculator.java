package com.javaoo.calculators;
import static java.lang.Math.pow;

public class ScientificCalculator {
	public static final double PI=3.14159;
	public static final double E=2.71828;
	private double holdValue;
	public final double getValueFromMemory() {
		return holdValue;
	}
	public final void putValueInMemory(double holdValue) {
		this.holdValue = holdValue;
	}
	
	public static final double exp(double a) {
		return pow(E, a);
	}
	
	public static final double log(double a) {
		return log(a)/log(E);
	}
	
	
	
	
}
