/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.Lab2;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Lab2Bai4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Nhập một ký tự: ");
        char kyTu = scanner.next().charAt(0);

        if (kyTu == 'A' || kyTu == 'E' || kyTu == 'I' || kyTu == 'O' || kyTu == 'U' ||
            kyTu == 'a' || kyTu == 'e' || kyTu == 'i' || kyTu == 'o' || kyTu == 'u') {
            System.out.println(kyTu + " là nguyên âm.");
        } else {
            System.out.println(kyTu + " là phụ âm.");
        }
    }
}