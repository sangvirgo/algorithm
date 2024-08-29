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
public class Lab2Bai5b {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Nhập cạnh a: ");
        double a = scanner.nextDouble();
        System.out.print("Nhập cạnh b: ");
        double b = scanner.nextDouble();
        System.out.print("Nhập cạnh c: ");
        double c = scanner.nextDouble();

        if (a + b > c && b + c > a && c + a > b) {
            System.out.println("Ba cạnh này có thể tạo thành một tam giác.");
        } else {
            System.out.println("Ba cạnh này không thể tạo thành một tam giác.");
        }
    }
}