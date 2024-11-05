/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.test;

/**
 *
 * @author soang
 */
public class B extends Student{
    private double toan;
    private double hoa;
    private double sinh;

    public B(int sdb, String hoTen, String diaChi, String uuTien, double toan, double hoa, double sinh) {
        super(sdb, hoTen, diaChi, uuTien);
        this.toan = toan;
        this.hoa = hoa;
        this.sinh = sinh;
    }

    public double getToan() {
        return toan;
    }

    public void setToan(double toan) {
        this.toan = toan;
    }

    public double getHoa() {
        return hoa;
    }

    public void setHoa(double hoa) {
        this.hoa = hoa;
    }

    public double getSinh() {
        return sinh;
    }

    public void setSinh(double sinh) {
        this.sinh = sinh;
    }

    @Override
    public String toString() {
        return "KhoiB{" + "Toan='" + toan +  '\''+
                ", Hoa='" + hoa +  '\''+
                ", Sinh='" + sinh +  '\''+
                ", SBD='" + sdb + '\''+
                ", Ho va ten='" + hoTen + '\''+
                ", Dia chi='" + diaChi + '\''+
                ", Uu tien='" + uuTien + '\''+
                '}';    }
    
    
}
