package test_oop;
import java.time.LocalDate;
import java.time.Period;
import static java.lang.Math.min;



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

	private static final int MAX_SPEED=110;
	private int speed;
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int newSpeed) {
		this.speed = min(newSpeed, MAX_SPEED);
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




/*
Trong ngôn ngữ lập trình Java, private static final int MAX_SPEED = 110; có ý nghĩa như sau:
private: Đây là từ khóa chỉ rằng biến MAX_SPEED chỉ có thể truy cập trong cùng một class. Nó không thể được truy cập từ bên ngoài class đó.
static: Từ khóa này biểu thị rằng biến MAX_SPEED thuộc về lớp (class) chứ không phải của các đối tượng (objects) được tạo từ lớp đó. Nó có nghĩa là chỉ có một bản sao của biến MAX_SPEED tồn tại cho mỗi lớp, không phụ thuộc vào số lượng đối tượng của lớp đó.
final: Từ khóa này chỉ rằng giá trị của biến MAX_SPEED không thể thay đổi sau khi đã được gán một giá trị. Một khi đã gán giá trị MAX_SPEED = 110;, thì không thể gán lại giá trị mới cho biến này.
int: Đây là kiểu dữ liệu của biến MAX_SPEED, có nghĩa là biến này là một số nguyên.
MAX_SPEED = 110;: Đây là giá trị được gán cho biến MAX_SPEED, có nghĩa là MAX_SPEED có giá trị là 110.
 */
