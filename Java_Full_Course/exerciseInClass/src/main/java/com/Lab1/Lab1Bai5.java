/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.Lab1;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Lab1Bai5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year=scanner.nextInt();
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
