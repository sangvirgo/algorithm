/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai1;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        TuyenSinh tuyenSinh=new TuyenSinh();
        while(true) {
            System.out.println("1: Nhap mot thi sinh");
            System.out.println("2: Hien thi thong tin thi sinh");
            System.out.println("3: Tim kiem theo so bao danh");
            System.out.println("4: Tim kiem theo khoi thi");
            System.out.println("5: Sap xep tang theo so bao danh");
            System.out.println("6: Tong so sinh vien theo khoi");
            System.out.println("7: Thoat");
            String input=sc.nextLine();
            switch (input) {
                case "1": {
                    System.out.println("A: Thi sinh thi khoi A");
                    System.out.println("B: Thi sinh thi khoi B");
                    System.out.println("C: Thi sinh thi khoi C");
                    String choice=sc.nextLine().toUpperCase();
                    switch (choice) {
                        case "A": {
                            System.out.println("Nhap vao so bao danh");
                            int sbd=sc.nextInt(); sc.nextLine();
                            System.out.println("Nhap vao ho va ten");
                            String name=sc.nextLine();
                            System.out.println("Nhap vao dia chi");
                            String address=sc.nextLine();
                            System.out.println("Nhap vao uu tien");
                            String uuTien=sc.nextLine(); 
                            System.out.println("Nhap vao diem toan");
                            double toan=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem ly");
                            double ly=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem hoa");
                            double hoa=sc.nextDouble(); sc.nextLine();
                            ThiSinh khoiA=new KhoiA(sbd, name, address, uuTien, toan, ly, hoa);
                            tuyenSinh.addThiSinh(khoiA);
                            System.out.println(khoiA.toString());
                            break;
                        }
                        case "B": {
                            System.out.println("Nhap vao so bao danh");
                            int sbd=sc.nextInt(); sc.nextLine();
                            System.out.println("Nhap vao ho va ten");
                            String name=sc.nextLine();
                            System.out.println("Nhap vao dia chi");
                            String address=sc.nextLine();
                            System.out.println("Nhap vao uu tien");
                            String uuTien=sc.nextLine(); 
                            System.out.println("Nhap vao diem toan");
                            double toan=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem hoa");
                            double hoa=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem sinh");
                            double sinh=sc.nextDouble(); sc.nextLine();
                            ThiSinh khoiB=new KhoiB(sbd, name, address, uuTien, toan, hoa, sinh);
                            tuyenSinh.addThiSinh(khoiB);
                            System.out.println(khoiB.toString());
                            break;
                        }
                        case "C": {
                            System.out.println("Nhap vao so bao danh");
                            int sbd=sc.nextInt(); sc.nextLine();
                            System.out.println("Nhap vao ho va ten");
                            String name=sc.nextLine();
                            System.out.println("Nhap vao dia chi");
                            String address=sc.nextLine();
                            System.out.println("Nhap vao uu tien");
                            String uuTien=sc.nextLine(); 
                            System.out.println("Nhap vao diem van");
                            double van=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem su");
                            double su=sc.nextDouble(); sc.nextLine();
                            System.out.println("Nhap vao diem dia");
                            double dia=sc.nextDouble(); sc.nextLine();
                            ThiSinh khoiB=new KhoiC(sbd, name, address, uuTien, van, su, dia);
                            tuyenSinh.addThiSinh(khoiB);
                            System.out.println(khoiB.toString());
                            break;
                        }
                        default: {
                            System.out.println("Invalid");
                            break;
                        }
                    }
                    break;
                }
                case "2": {
                    tuyenSinh.showThiSinh();
                    break;
                }
                case "3": {
                    System.out.println("Nhap vao so bao danh can tim");
                    int sbd=sc.nextInt(); sc.nextLine();
                    tuyenSinh.searchByCandidateNumber(sbd);
                    break;
                }
                case "4": {
                            System.out.println("Nhap vao khoi thi can loc");
                            String name=sc.nextLine();
                            tuyenSinh.searchByKhoi(name);
                    break;
                }
                case "5": {
                    tuyenSinh.sortThiSinhBySBD();
                    break;
                }
                case "6": {
                            System.out.println("Nhap vao khoi thi can dem");
                            String name=sc.nextLine();
                            tuyenSinh.countByKhoi(name);
                    break;
                }
                case "7": {
                    return;
                }
                default: {
                    System.out.println("Invalid");
                    continue;
                }
            }
        }
    }
}
