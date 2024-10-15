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

public class Nguoi {
    private String hoTen;
    private int tuoi;
    private int namSinh;
    private String queQuan;

    public Nguoi() {
    }

    public Nguoi(String hoTen, int tuoi, int namSinh, String queQuan) {
        this.hoTen = hoTen;
        this.tuoi = tuoi;
        this.namSinh = namSinh;
        this.queQuan = queQuan;
    }

    public void nhapThongTin() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập họ tên: ");
        this.hoTen = sc.nextLine();
        System.out.print("Nhập tuổi: ");
        this.tuoi = sc.nextInt();
        System.out.print("Nhập năm sinh: ");
        this.namSinh = sc.nextInt();
        sc.nextLine(); 
        System.out.print("Nhập quê quán: ");
        this.queQuan = sc.nextLine();
    }

    public void hienThiThongTin() {
        System.out.println("Họ tên: " + this.hoTen);
        System.out.println("Tuổi: " + this.tuoi);
        System.out.println("Năm sinh: " + this.namSinh);
        System.out.println("Quê quán: " + this.queQuan);
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }

    public int getNamSinh() {
        return namSinh;
    }

    public void setNamSinh(int namSinh) {
        this.namSinh = namSinh;
    }

    public String getQueQuan() {
        return queQuan;
    }

    public void setQueQuan(String queQuan) {
        this.queQuan = queQuan;
    }


}
