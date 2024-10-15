/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai4;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class KhachHang {
    private String hoVaTen;
    private String soNha;
    private String maSoCongTo;

    public KhachHang(String hoVaTen, String soNha, String maSoCongTo) {
        this.hoVaTen = hoVaTen;
        this.soNha = soNha;
        this.maSoCongTo = maSoCongTo;
    }

    public KhachHang() {
    }

    public String getHoVaTen() {
        return hoVaTen;
    }

    public void setHoVaTen(String hoVaTen) {
        this.hoVaTen = hoVaTen;
    }

    public String getSoNha() {
        return soNha;
    }

    public void setSoNha(String soNha) {
        this.soNha = soNha;
    }

    public String getMaSoCongTo() {
        return maSoCongTo;
    }

    public void setMaSoCongTo(String maSoCongTo) {
        this.maSoCongTo = maSoCongTo;
    }


    public void nhap() {
        Scanner sc=new Scanner(System.in);
        System.out.println("Nhap ho va ten: ");
        hoVaTen=sc.nextLine();
        System.out.println("Nhap so nha: ");
        soNha=sc.nextLine();
        System.out.println("Nhap ma so cong to: ");
        maSoCongTo=sc.nextLine();
    }

    public void xuat() {
        System.out.println("Ho va ten: "+hoVaTen);
        System.out.println("So nha: "+soNha);
        System.out.println("Ma so cong to: "+maSoCongTo);
    }
}
