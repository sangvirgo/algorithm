/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai1;

/**
 *
 * @author soang
 */
public class KhoiC extends ThiSinh{
    private double van;
    private double su;
    private double dia;

    public KhoiC(int sbd, String hoTen, String diaChi, String uuTien, double van, double su, double dia) {
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
                ", SBD='" + sbd + '\''+
                ", Ho va ten='" + hoTen + '\''+
                ", Dia chi='" + diaChi + '\''+
                ", Uu tien='" + uuTien + '\''+
                '}';
    }
    
    
    
}
