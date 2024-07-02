package test_oop;
import java.time.LocalDate;
import java.time.Period;

public class Car {
//	contructor
	
	public Car() {}
	
	public Car(String name)  {
		this(name, 0, false, null);
	}
	
	public Car(String nameCar, int speed, boolean engineState, LocalDate manufactured) {
		this.setNameCar(nameCar);
		this.setSpeed(speed);
		this.setEngineState(engineState);
		this.setManufactured(manufactured);
	}
	
	private String nameCar;
	public String getNameCar() {
		return nameCar;
	}
	public void setNameCar(String nameCar) {
		this.nameCar = nameCar;
	}


	private boolean engineState;
	public boolean isEngineState() {
		return engineState;
	}
	public void setEngineState(boolean engineState) {
		this.engineState = engineState;
	}

	
	private int speed;
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int speed) {
		this.speed = speed;
	}
	
	
	
	private LocalDate manufactured;
	public LocalDate getManufactured() {
		return manufactured;
	}
	public void setManufactured(LocalDate manufactured) {
		this.manufactured = manufactured;
	}

	public int getAge() {
		return Period.between(getManufactured(), LocalDate.now()).getYears();
	}
	
	
	public void setTirePressures(int ... pressure) {
		
	}
	
	

}
