/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai2NangCao;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class SinhVien {
    private String hoTen;
    private String MSSV;
    private double diemNNLTCPP;
    private double LTHDT;
    private double ANM;
    private double DTB;
    private String xepLoai;

    public SinhVien() {
    }

    public SinhVien(String hoTen, String MSSV, double diemNNLTCPP, double LTHDT, double ANM) {
        this.hoTen = hoTen;
        this.MSSV = MSSV;
        this.diemNNLTCPP = diemNNLTCPP;
        this.LTHDT = LTHDT;
        this.ANM = ANM;
        this.DTB=(this.diemNNLTCPP+this.LTHDT+this.ANM)/3;
        if(this.DTB<5) this.xepLoai="Khong dat";
        else if(this.DTB>=5 && this.DTB<7) this.xepLoai="Trung binh";
        else if(this.DTB>=7 && this.DTB<9) this.xepLoai="Kha";
        else this.xepLoai="Gioi"; 
    }

    public String getHoTen() {
        return hoTen;
    }

    public String getMSSV() {
        return MSSV;
    }

    public double getDiemNNLTCPP() {
        return diemNNLTCPP;
    }

    public double getLTHDT() {
        return LTHDT;
    }

    public double getANM() {
        return ANM;
    }

    public double getDTB() {
        return DTB;
    }

    public String getXepLoai() {
        return xepLoai;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public void setMSSV(String MSSV) {
        this.MSSV = MSSV;
    }

    public void setDiemNNLTCPP(double diemNNLTCPP) {
        this.diemNNLTCPP = diemNNLTCPP;
    }

    public void setLTHDT(double LTHDT) {
        this.LTHDT = LTHDT;
    }

    public void setANM(double ANM) {
        this.ANM = ANM;
    }
    
    public void init() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhap ho ten: ");
        this.hoTen = scanner.nextLine();
        System.out.println("Nhap MSSV: ");
        this.MSSV = scanner.nextLine();
        System.out.println("Nhap diem NNLTCPP: ");
        this.diemNNLTCPP = scanner.nextDouble();
        System.out.println("Nhap diem LTHDT: ");
        this.LTHDT = scanner.nextDouble();
        System.out.println("Nhap diem ANM: ");
        this.ANM = scanner.nextDouble();
        this.DTB=(this.diemNNLTCPP+this.LTHDT+this.ANM)/3;
        if(this.DTB<5) this.xepLoai="Khong dat";
        else if(this.DTB>=5 && this.DTB<7) this.xepLoai="Trung binh";
        else if(this.DTB>=7 && this.DTB<9) this.xepLoai="Kha";
        else this.xepLoai="Gioi";
    }

    public void tinhDiemTB() {
        this.DTB=(this.diemNNLTCPP+this.LTHDT+this.ANM)/3;
    }

    public void xepLoai() {
        if(this.DTB<5) this.xepLoai="Khong dat";
        else if(this.DTB>=5 && this.DTB<7) this.xepLoai="Trung binh";
        else if(this.DTB>=7 && this.DTB<9) this.xepLoai="Kha";
        else this.xepLoai="Gioi";
    }

    public void display() {
        System.out.printf("%s %17.2f %17.2f %17.2f %15.2f %15s\n", this.hoTen, this.diemNNLTCPP, this.LTHDT, this.ANM, this.DTB, this.xepLoai);
    }
}
