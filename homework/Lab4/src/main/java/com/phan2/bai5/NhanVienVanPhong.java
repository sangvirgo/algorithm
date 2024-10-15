/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai5;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class NhanVienVanPhong extends NhanVien {
    private double luongCoBan;
    private double heSoLuong;

    public NhanVienVanPhong() {
        super();
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập lương cơ bản: ");
        this.luongCoBan = sc.nextDouble();
        System.out.print("Nhập hệ số lương: ");
        this.heSoLuong = sc.nextDouble();
    }

    @Override
    public double tinhLuong() {
        double luong = luongCoBan * heSoLuong;
        return luong + super.tinhTroCap(luong);
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("NVVP\t" + String.format("%.2f", tinhLuong()));
    }
}

