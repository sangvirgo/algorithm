/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai5;

/**
 *
 * @author soang
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<NhanVien> danhSachNhanVien = new ArrayList<>();

        System.out.print("Nhập số lượng nhân viên: ");
        int n = sc.nextInt();
        sc.nextLine(); 

        for (int i = 0; i < n; i++) {
            System.out.println("Nhập thông tin cho nhân viên thứ " + (i + 1) + ":");
            System.out.print("Nhập loại nhân viên (1 - NVVP, 2 - NVSX): ");
            int loaiNV = sc.nextInt();
            sc.nextLine(); 

            NhanVien nv;
            if (loaiNV == 1) {
                nv = new NhanVienVanPhong();
            } else {
                nv = new NhanVienSanXuat();
            }

            nv.nhapThongTin();
            danhSachNhanVien.add(nv);
        }

        System.out.println("\nDanh sách nhân viên:");
        System.out.println("Mã NV\tHọ tên\t\tNgày sinh\tNgày vào làm\tLoại NV\tLương");
        for (NhanVien nv : danhSachNhanVien) {
            nv.hienThiThongTin();
        }
    }
}

