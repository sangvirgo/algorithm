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
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<KhuPho> Quarters=new ArrayList<>();
        
        while(true) {
            System.out.println("1: Nhap vao so ho dan trong khu pho");
            System.out.println("2: Hien thi thong tin khu pho ra");
            System.out.println("3: Thoat");
            String choice =sc.nextLine();
            switch(choice) {
                case "1": {
                    System.out.println("Nhap vao so khu pho can nhap");
                    int soKhuPho=sc.nextInt(); sc.nextLine();
                    for(int i=0; i<soKhuPho; i++) {
                        System.out.println("Nhap vao thong tin khu pho thu "+ (i+1));
                        KhuPho Quarter=new KhuPho();
                        Quarter.nhap();
                        Quarters.add(Quarter);
                    }
                    break;
                }
                
                case "2": {
                    int i=1;
                    for(KhuPho temp: Quarters) {
                        System.out.println("Khu pho thu " + i++);
                        temp.show();
                    }
                    break;
                }
                
                case "3": {
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
