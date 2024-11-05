/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.test;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TuyenSinh ts=new TuyenSinh();
        
        while(true) {
            System.out.println("1: Nhap mot thi sinh");
            System.out.println("2: Hien thi thong tin thi sinh");
            System.out.println("3: Tim kiem theo so bao danh");
            System.out.println("4: Tim kiem theo khoi thi");
            System.out.println("5: Sap xep tang theo so bao danh");
            System.out.println("6: Tong so sinh vien theo khoi");
            System.out.println("7: Thoat");
            String line=sc.nextLine();
            switch(line) {
                case "1": {
                    System.out.println("A: Thi sinh thi khoi A");
                    System.out.println("B: Thi sinh thi khoi B");
                    System.out.println("C: Thi sinh thi khoi C");
                    String chice = sc.nextLine().toUpperCase();
                    switch(chice) {
                        case "A": {
                            
                            break;
                        }
                        case "B": {
                            
                            break;
                        }
                        case "C": {
                            
                            break;
                        }
                        default: {
                            
                            
                        }
                    }
                    break;
                }
                case "2": {
                    
                    break;
                }
                case "3": {
                    
                    break;
                }
                case "4": {
                    
                    break;
                }
                case "5": {
                    
                    break;
                }
                case "6": {
                    
                    break;
                }
                case "7": {
                    return
                }
                default: {
                    System.out.println("Invalid");
                    continue;
                }
            }
        }
    }
}
