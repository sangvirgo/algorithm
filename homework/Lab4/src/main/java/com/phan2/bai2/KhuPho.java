/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author soang
 */
public class KhuPho {
    private int soThanhVien;
    private int soNha;
    private List<Nguoi> thongTinCaNhan;

    public KhuPho() {
        this.thongTinCaNhan=new ArrayList<>();
    }

    public KhuPho(int soThanhVien, int soNha, List<Nguoi> thongTinCaNhan) {
        this.soThanhVien = soThanhVien;
        this.soNha = soNha;
        this.thongTinCaNhan = thongTinCaNhan;
    }
    
    public void nhap() {
        Scanner sc=new Scanner(System.in);
        System.out.println("Nhap vao so thanh vien");
        this.soThanhVien=sc.nextInt();
        System.out.println("Nhap vao so nha");
        this.soNha=sc.nextInt();
        sc.nextLine();
        
        for(int i=0; i<this.soThanhVien; i++) {
            System.out.println("Nhap vao thong tin thanh vien thu"+(i+1));
            Nguoi person=new Nguoi();
            person.nhap();
            this.thongTinCaNhan.add(person);
        }
    }
    
    public void show() {
        System.out.println("Số nhà: " + this.soNha);
        System.out.println("Số thành viên: " + this.soThanhVien);
        System.out.println("Danh sách thành viên:");
        for (Nguoi nguoi : thongTinCaNhan) {
            nguoi.show();
            System.out.println(); 
        }
    }
}
