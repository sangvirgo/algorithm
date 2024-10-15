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
public class NhanVienSanXuat extends NhanVien {
    private int soSanPham;
    private double donGia;

    public NhanVienSanXuat() {
        super();
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập số sản phẩm: ");
        this.soSanPham = sc.nextInt();
        System.out.print("Nhập đơn giá: ");
        this.donGia = sc.nextDouble();
    }

    @Override
    public double tinhLuong() {
        double luong = soSanPham * donGia;
        return luong + super.tinhTroCap(luong);
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("NVSX\t" + String.format("%.2f", tinhLuong()));
    }
}
