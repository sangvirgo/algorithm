/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai2NangCao;


/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        DSSinhVien ds = new DSSinhVien();
        ds.nhap();
        ds.display();
        ds.sortByMSSV();
        ds.display();
        ds.findByName();
        ds.findByPoint();
        ds.highestScore();
    }
}
