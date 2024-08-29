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
public class LabBai4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a=scanner.nextInt();
        int b=scanner.nextInt();
        int c=scanner.nextInt();
        double delta= Math.pow(b, 2) - 4 * a * c;
        System.out.printf("delta: %f", Math.sqrt(delta));
        scanner.close();
    }
}
