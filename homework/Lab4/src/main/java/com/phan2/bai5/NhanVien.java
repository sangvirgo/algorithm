/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai5;

/**
 *
 * @author soang
 */
import java.util.Scanner;

public class NhanVien {
    private String maNV;
    private String hoNV;
    private String tenNV;
    private String ngaySinh;
    private String diaChi;
    private String ngayVaoLam;
    private boolean coConNho; 

    public NhanVien() {
    }

    public NhanVien(String maNV, String hoNV, String tenNV, String ngaySinh, String diaChi, String ngayVaoLam, boolean coConNho) {
        this.maNV = maNV;
        this.hoNV = hoNV;
        this.tenNV = tenNV;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.ngayVaoLam = ngayVaoLam;
        this.coConNho = coConNho;
    }

    public void nhapThongTin() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập mã nhân viên: ");
        this.maNV = sc.nextLine();
        System.out.print("Nhập họ: ");
        this.hoNV = sc.nextLine();
        System.out.print("Nhập tên: ");
        this.tenNV = sc.nextLine();
        System.out.print("Nhập ngày sinh (dd/MM/yyyy): ");
        this.ngaySinh = sc.nextLine();
        System.out.print("Nhập địa chỉ: ");
        this.diaChi = sc.nextLine();
        System.out.print("Nhập ngày vào làm (dd/MM/yyyy): ");
        this.ngayVaoLam = sc.nextLine();
        System.out.print("Nhân viên có con nhỏ dưới 3 tuổi? (true/false): ");
        this.coConNho = sc.nextBoolean();
    }

    public void hienThiThongTin() {
        System.out.println(this.maNV + "\t" + this.hoNV + " " + this.tenNV + "\t" + this.ngaySinh + "\t" + this.ngayVaoLam);
    }

    public double tinhLuong() {
        return 0;
    }

    public double tinhTroCap(double luong) {
        if (coConNho) {
            return luong * 0.05; 
        }
        return 0;
    }
}
