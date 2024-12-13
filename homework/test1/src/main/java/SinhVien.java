/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author tansa
 */
public class SinhVien {
    public String name;
    public double marks;
    public String majors;
    public String getGrade() {
        if(this.marks<3) return "Kém";
        else if(this.marks<5) return "Yếu";
        else if(this.marks<6.5) return "Trung binh";
        else if(this.marks<7.5) return "Kha";
        else if(this.marks<9) return "Gioi";
        else return "Gioi";
    }
    public boolean isBonus() {
        return this.marks>=7.5;
    }
}
