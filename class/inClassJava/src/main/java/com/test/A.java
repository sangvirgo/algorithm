/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.test;

/**
 *
 * @author soang
 */
public class A extends Student{
    private double toan;
    private double ly;
    private double hoa;

    public A(int sdb, String hoTen, String diaChi, String uuTien, double toan, double ly, double hoa) {
        super(sdb, hoTen, diaChi, uuTien);
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }

    public double getToan() {
        return toan;
    }

    public void setToan(double toan) {
        this.toan = toan;
    }

    public double getLy() {
        return ly;
    }

    public void setLy(double ly) {
        this.ly = ly;
    }

    public double getHoa() {
        return hoa;
    }

    public void setHoa(double hoa) {
        this.hoa = hoa;
    }

    @Override
    public String toString() {
        return "KhoiA{" + "Toan='" + toan + '\''+
                ", Ly='" + ly + '\''+
                ", Hoa='" + hoa + '\''+
                ", SBD='" + sdb + '\''+
                ", Ho va ten='" + hoTen + '\''+
                ", Dia chi='" + diaChi + '\''+
                ", Uu tien='" + uuTien + '\''+
                '}';
    }
    
    
}
