/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.test;

/**
 *
 * @author soang
 */
public class C extends Student{
    private double van;
    private double su;
    private double dia;

    public C(int sbd, String hoTen, String diaChi, String uuTien, double van, double su, double dia) {
        super(sbd, hoTen, diaChi, uuTien);
        this.van = van;
        this.su = su;
        this.dia = dia;
    }

    public double getVan() {
        return van;
    }

    public void setVan(double van) {
        this.van = van;
    }

    public double getSu() {
        return su;
    }

    public void setSu(double su) {
        this.su = su;
    }

    public double getDia() {
        return dia;
    }

    public void setDia(double dia) {
        this.dia = dia;
    }

    @Override
    public String toString() {
        return "KhoiC{" + "Van='" + van + '\''+
                ", Su='" + su + '\''+
                ", Dia='" + dia + '\''+
                ", SBD='" + sdb + '\''+
                ", Ho va ten='" + hoTen + '\''+
                ", Dia chi='" + diaChi + '\''+
                ", Uu tien='" + uuTien + '\''+
                '}';
    }
    
    
    
}
