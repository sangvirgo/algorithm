/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai2;


/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        ThucPham tp1 = new ThucPham("TP001");
        tp1.setTenHang("Sua tuoi");
        tp1.setDonGia(20.5);
        tp1.setnSX(15, 7, 2023);
        tp1.sethSD(4, 10, 2024);
        
        System.out.println(tp1.toString());
        
        tp1.kiemTraHSD();
        
        tp1.kiemTraNgay();
    }
}