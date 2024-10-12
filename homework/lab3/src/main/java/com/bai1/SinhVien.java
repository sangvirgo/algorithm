/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai1;
import java.util.Locale;
/**
 *
 * @author soang
 */
public class SinhVien {
    private int maSV;
    private String tenSV;
    private float diemLT;
    private float diemTH;

    public SinhVien() {
    }

    public SinhVien(int maSV, String tenSV, float diemLT, float diemTH) {
        this.maSV = maSV;
        this.tenSV = tenSV;
        this.diemLT = diemLT;
        this.diemTH = diemTH;
    }

    public int getMaSV() {
        return maSV;
    }

    public String getTenSV() {
        return tenSV;
    }

    public float getDiemLT() {
        return diemLT;
    }

    public float getDiemTH() {
        return diemTH;
    }

    public void setMaSV(int maSV) {
        this.maSV = maSV;
    }

    public void setTenSV(String tenSV) {
        this.tenSV = tenSV;
    }

    public void setDiemLT(float diemLT) {
        this.diemLT = diemLT;
    }

    public void setDiemTH(float diemTH) {
        this.diemTH = diemTH;
    }
    public float tinhDiemTB() {
       return (this.diemLT+this.diemTH)/2;
    }
    public String toString() {
        return this.maSV + "-" + this.tenSV + " diem trung binh: "+ this.tinhDiemTB();
    }
    
    public void inSV() {
        Locale locale =new Locale("vi", "VN");
        System.out.printf(locale, "6%d %-18s %12.2f %12.2f %12.2f \n", this.maSV, this.tenSV, this.diemLT, this.diemTH, this.tinhDiemTB());
    }
}
