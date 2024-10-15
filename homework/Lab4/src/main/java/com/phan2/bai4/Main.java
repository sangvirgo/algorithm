/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai4;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<KhachHang> kh=new ArrayList<>();

        while(true) {
            System.out.println("1: Nhập vào các thông tin cho n hộ sử dụng điện: ");
            System.out.println("2: Hiển thị thông tin về các biên lai đã nhập");
            System.out.println("3: Thoat");
            String choice=sc.nextLine();
            switch (choice) {
                case "1": {
                    System.out.println("Nhap so ho su dung dien: ");
                    int n = sc.nextInt(); sc.nextLine();
                    for (int i = 0; i < n; i++) {
                        BienLai bl = new BienLai();
                        bl.nhap();
                        kh.add(bl);
                    }
                    break;
                }

                case "2": {
                    for (KhachHang khachHang : kh) {
                        khachHang.xuat();
                    }
                    break;
                }

                case "3": {
                    System.exit(0);
                    break;
                }
            }
        }
    }
}
