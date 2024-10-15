/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai2;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Nguoi {
    private String hoTen;
    private int age;
    private int namSinh;
    private String ngheNghiep;

    public Nguoi() {
    }
    
    

    public Nguoi(String hoTen, int age, int namSinh, String ngheNghiep) {
        this.hoTen = hoTen;
        this.age = age;
        this.namSinh = namSinh;
        this.ngheNghiep = ngheNghiep;
    }
    
    public void nhap() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập họ tên: ");
        this.hoTen = sc.nextLine();
        System.out.print("Nhập tuổi: ");
        this.age = sc.nextInt();
        System.out.print("Nhập năm sinh: ");
        this.namSinh = sc.nextInt();
        sc.nextLine();
        System.out.print("Nhập nghề nghiệp: ");
        this.ngheNghiep = sc.nextLine();
    }
    
    public void show() {
        System.out.println("Họ tên: " + this.hoTen);
        System.out.println("Tuổi: " + this.age);
        System.out.println("Năm sinh: " + this.namSinh);
        System.out.println("Nghề nghiệp: " + this.ngheNghiep);
    }
}
