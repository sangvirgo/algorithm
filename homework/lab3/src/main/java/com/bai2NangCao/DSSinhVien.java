/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai2NangCao;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author soang
 */
public class DSSinhVien {
    int n;
    ArrayList<SinhVien> list = new ArrayList<>();
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so luong sinh vien: ");
        n = sc.nextInt(); sc.nextLine();
        for(int i=0;i<n;i++){
            System.out.println("Nhap thong tin sinh vien thu "+(i+1));
            System.out.println("Nhap ho ten: ");
            String hoTen = sc.nextLine();
            System.out.println("Nhap MSSV: ");
            String MSSV = sc.nextLine();
            System.out.println("Nhap diem NNLTCPP: ");
            double diemNNLTCPP = sc.nextDouble();
            System.out.println("Nhap diem LTHDT: ");
            double LTHDT = sc.nextDouble();
            System.out.println("Nhap diem ANM: ");
            double ANM = sc.nextDouble(); sc.nextLine();
            SinhVien sv = new SinhVien(hoTen, MSSV, diemNNLTCPP, LTHDT, ANM);
            list.add(sv);
        }
    }

    public void display() {
        int gioi=0, kha=0, tb=0, kdat=0;
        System.out.println("XEP LOAI SINH VIEN");
        System.out.printf("%s %20s %15s %15s %15s %15s\n", "HO VA TEN", "DIEM NNLTC++", "DIEM LTHDT", "DIEM ANM", "DIEM TB", "XEP LOAI");
        for(SinhVien sv: list) {
            sv.display();
            if(sv.getDTB()<5) kdat++;
            else if(sv.getDTB()>=5 && sv.getDTB()<7) tb++;
            else if(sv.getDTB()>=7 && sv.getDTB()<9) kha++;
            else gioi++;
        }
        System.out.println("TONG KET");
        System.out.println("-Tong so sinh vien xep loai Gioi: "+gioi);
        System.out.println("-Tong so sinh vien xep loai Kha: "+kha);
        System.out.println("-Tong so sinh vien xep loai Trung binh: "+tb);
        System.out.println("-Tong so sinh vien khong dat: "+kdat);
        System.out.println("(Tinh tong so sv theo xep loai hien thi vao "+n+" o tren)");
    }

    Comparator<SinhVien> com=new Comparator<SinhVien>() {
        @Override
        public int compare(SinhVien o1, SinhVien o2) {
            return o1.getMSSV().compareTo(o2.getMSSV());
        }
    };
    
    public void sortByMSSV() {
        Collections.sort(list, com);
//        list.sort((o1, o2) -> o1.getMSSV().compareTo(o2.getMSSV()));
//        list.sort((o1, o2)->o1.getMSSV().compareTo((o2.getMSSV())));



    }

    public void findByName() {
        System.out.println("Nhap ten sinh vien can tim: ");
        Scanner sc = new Scanner(System.in);
        String name=sc.nextLine();
        name=name.toUpperCase();
        System.out.printf("%s %20s %15s %15s %15s %15s\n", "HO VA TEN", "DIEM NNLTC++", "DIEM LTHDT", "DIEM ANM", "DIEM TB", "XEP LOAI");
        for(SinhVien sv: list) {
            if(sv.getHoTen().toUpperCase().contains(name)) {
                sv.display();
            }
        }
    }

    public void findByPoint() {
        System.out.println("Nhap diem can tim: ");
        Scanner sc = new Scanner(System.in);
        double diem=sc.nextDouble(); sc.nextLine();
        int count=0;
        for(SinhVien sv: list) {
            if(sv.getDTB()>=diem) {
                count++;
            }
        }
        System.out.println("So sinh vien co diem >= "+diem+" la: "+count);
    }

    public void highestScore() {
        double maxx=list.get(0).getDTB();
        System.out.println("SINH VIEN CO DIEM CAO NHAT");
        System.out.printf("%s %20s %15s %15s %15s %15s\n", "HO VA TEN", "DIEM NNLTC++", "DIEM LTHDT", "DIEM ANM", "DIEM TB", "XEP LOAI");
        for(SinhVien sv:list) {
            if(sv.getDTB()>maxx) {
                maxx=sv.getDTB();
            }
        }
        for (SinhVien sv : list) {
            if (sv.getDTB() == maxx) {
                sv.display();
            }
        }
    }
}
