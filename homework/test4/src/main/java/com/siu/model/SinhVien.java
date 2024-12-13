/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.siu.model;

/**
 *
 * @author tansa
 */
public class SinhVien {
    private String maSV;
    private String hoLot;
    private String ten;
    private String maLop;
    private String tenLop;
    private String soDT;
    private String email;

    public SinhVien(String maSV, String hoLot, String ten, String maLop, String tenLop, String soDT, String email) {
        this.maSV = maSV;
        this.hoLot = hoLot;
        this.ten = ten;
        this.maLop = maLop;
        this.tenLop = tenLop;
        this.soDT = soDT;
        this.email = email;
    }

    public SinhVien() {
    }

    public String getMaSV() {
        return maSV;
    }

    public void setMaSV(String maSV) {
        this.maSV = maSV;
    }

    public String getHoLot() {
        return hoLot;
    }

    public void setHoLot(String hoLot) {
        this.hoLot = hoLot;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getMaLop() {
        return maLop;
    }

    public void setMaLop(String maLop) {
        this.maLop = maLop;
    }

    public String getTenLop() {
        return tenLop;
    }

    public void setTenLop(String tenLop) {
        this.tenLop = tenLop;
    }

    public String getSoDT() {
        return soDT;
    }

    public void setSoDT(String soDT) {
        this.soDT = soDT;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    
    
}
