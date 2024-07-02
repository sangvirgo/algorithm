package test_oop;
import java.time.LocalDate;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		System.out.println("hihihih");
		Car car54=new Car();
		car54.setNameCar("Car 54");
		car54.setSpeed(20);
		car54.setManufactured(LocalDate.of(2004, 9, 14));
		
		Car mach5=new Car();
		mach5.setNameCar("Mach V");
		mach5.setSpeed(100);
		mach5.setManufactured(LocalDate.of(2004, 9, 06));
		
		for(Car car: new Car[]{car54, mach5}) {
			System.out.printf("%s is %d years old and is traveling at %d mph%n", car.getNameCar(), car.getAge(), car.getSpeed());
		}
        

		mach5.setTirePressures(32, 34, 45, 65);
		car54.setTirePressures(new int[] {32, 34, 45, 65});
		
		Car mercedes=new Car("E200", 150, true, LocalDate.of(1995, 4, 20));
		
		for(Car car: new Car[] {mercedes}) {
			System.out.printf("%s is %d years old and is traveling at %d mph%n", car.getNameCar(), car.getAge(), car.getSpeed());
		}
		
		Box rectangle=new Box(7.0, 6.0, 5.0);
		rectangle.printBox();
	}

}
