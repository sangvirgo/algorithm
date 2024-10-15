/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai3;

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
        List<HSHocSinh> students=new ArrayList<>();
        while(true) {
            System.out.println("1: Nhập vào một danh sách gồm n học sinh (n- nhập từ bàn phím)");
            System.out.println("2: Hiển thị ra màn hình tất cả những học sinh sinh năm 2000");
            System.out.println("3: Cho biết có bao nhiêu học sinh sinh năm 2000 và có quê ở Thái Nguyên");
            String choice= sc.nextLine();
        switch(choice) {
            case "1": {
                System.out.println("Nhap vao n: ");
                int n=sc.nextInt(); sc.nextLine();
                for(int i=0; i<n; i++) {
                    HSHocSinh hs=new HSHocSinh();
                    hs.nhapThongTin();
                    students.add(hs);
                }
                break;
            }
            
            case "2": {
                students.stream()
                        .filter(o -> o.getNamSinh()==2000)
                        .forEach(o ->o.hienThiThongTin());
                break;
            }
            
            case "3": {
                long cnt=students.stream()
                        .filter(o -> (o.getNamSinh()==2000 && o.getQueQuan().equalsIgnoreCase("Thai Nguyen")))
                        .count();
                System.out.println("Số lượng học sinh sinh năm 2000 và có quê quán ở Thái Nguyên: " + cnt);
                break;
            }
            
            default: {
                System.out.println("Invalid");
                continue;
            }
        }
        }
    }
}
