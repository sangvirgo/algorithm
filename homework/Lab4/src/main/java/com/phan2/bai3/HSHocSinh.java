/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai3;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class HSHocSinh extends Nguoi {
    private String lop;
    private String khoaHoc;
    private String kyHoc;

    public HSHocSinh() {
    }

    public HSHocSinh(String hoTen, int tuoi, int namSinh, String queQuan, String lop, String khoaHoc, String kyHoc) {
        super(hoTen, tuoi, namSinh, queQuan);
        this.lop = lop;
        this.khoaHoc = khoaHoc;
        this.kyHoc = kyHoc;
    }

    @Override
    public void nhapThongTin() {
        super.nhapThongTin();
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập lớp: ");
        this.lop = sc.nextLine();
        System.out.print("Nhập khóa học: ");
        this.khoaHoc = sc.nextLine();
        System.out.print("Nhập kỳ học: ");
        this.kyHoc = sc.nextLine();
    }

    @Override
    public void hienThiThongTin() {
        super.hienThiThongTin();
        System.out.println("Lớp: " + this.lop);
        System.out.println("Khóa học: " + this.khoaHoc);
        System.out.println("Kỳ học: " + this.kyHoc);
    }
}
