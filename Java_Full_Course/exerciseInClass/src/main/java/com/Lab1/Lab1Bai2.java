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
public class Lab1Bai2 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        double dai=scanner.nextDouble();
        double rong=scanner.nextDouble();
        System.out.printf("Chu vi: %f \n", (rong+dai)*2);
        System.out.printf("Diện tích: %f \n", dai*rong);
        System.out.printf("Cạnh nhỏ nhất: %f \n", Math.min(dai, rong));
        scanner.close();
    }
}
