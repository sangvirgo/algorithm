/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai1;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);
        for(int i=1; i<=3; i++) {
            SinhVien sv1=new SinhVien();
            System.out.print("Nhap ma sinh vien "+i+" : ");
            sv1.setMaSV(scanner.nextInt()); scanner.nextLine();
            System.out.print("Nhap ten sinh vien "+i+" : ");
            sv1.setTenSV(scanner.nextLine()); 
            System.out.print("Nhap diem ly thuyet: ");
            sv1.setDiemLT(scanner.nextFloat()); 
            System.out.print("Nhap diem thuc hanh: ");
            sv1.setDiemTH(scanner.nextFloat());
            sv1.inSV();
            System.out.println(sv1);
        }
    }
}
