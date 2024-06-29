package test_oop;
import java.time.LocalDate;
import java.time.Period;

public class Car {
	private int speed;
	private int gasoline;
	private boolean engineState;
	private LocalDate manufactured;
	
	
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int speed) {
		this.speed = speed;
	}
	
	public LocalDate getManufactured() {
		return manufactured;
	}
	public void setManufactured(LocalDate manufactured) {
		this.manufactured = manufactured;
	}

	public int getAge() {
		return Period.between(getManufactured(), LocalDate.now()).getYears();
	}
	
	
}
