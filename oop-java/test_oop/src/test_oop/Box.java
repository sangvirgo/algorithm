package test_oop;

public class Box {
	private double height;
	private double width;
	private double length;
	
	public Box() {}
	
	public Box(double h, double w, double l) {
		this.setHeight(h);
		this.setWidth(w);
		this.setLength(l);
	}
	
	public Box(double hwt) {
		this.width=this.height=this.length=hwt;
	}
	
	public double getHeight() {
		return height;
	}
	public void setHeight(double height) {
		this.height = height;
	}
	public double getWidth() {
		return width;
	}
	public void setWidth(double width) {
		this.width = width;
	}
	public double getLength() {
		return length;
	}
	public void setLength(double length) {
		this.length = length;
	}
	
	public double getVolume() {
		return this.getHeight()*this.getLength()*this.getWidth();
	}
	
	public double getSurfaceArea() {
		return 2 * (this.getLength() * this.getWidth() +
		            this.getLength() * this.getHeight() +
		            this.getWidth() * this.getHeight());
	}
	
	public void printBox() {
		if(this.getHeight()<=0 && this.getWidth()<=0 && this.getLength()<=0) {
			System.out.println("The box contains invalid properties!");
		} else {
			System.out.printf("Length = %.4f\n", this.getLength());
			System.out.printf("Width = %.4f\n", this.getWidth());
			System.out.printf("Height = %.4f\n", this.getHeight());
			System.out.printf("Volume = %.4f\n", this.getVolume());
			System.out.printf("Surface Area = %.4f\n", this.getSurfaceArea());
		}
	}
	
}
