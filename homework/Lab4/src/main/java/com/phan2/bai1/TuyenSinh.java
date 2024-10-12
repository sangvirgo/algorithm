/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan2.bai1;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

/**
 *
 * @author soang
 */
public class TuyenSinh {
    List <ThiSinh> thiSinh;
    public TuyenSinh() {
        this.thiSinh=new ArrayList<>();
    }
    
    public void addThiSinh(ThiSinh ts){
        this.thiSinh.add(ts);
    }
    
    public void showThiSinh() {
        this.thiSinh.forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByCandidateNumber(int candidateNumber) {
        this.thiSinh.stream()
                .filter(o -> o.getSbd()==candidateNumber)
                .forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByKhoi(String temp) {
        String khoi = temp.toUpperCase();
        this.thiSinh.stream()
            .filter(o -> (o instanceof KhoiA && khoi.equalsIgnoreCase("A"))
                || (o instanceof KhoiB && khoi.equalsIgnoreCase("B"))
                || (o instanceof KhoiC && khoi.equalsIgnoreCase("C")))
            .forEach(o -> System.out.println(o.toString()));
    }
    
    public void sortThiSinhBySBD() {
        this.thiSinh.sort(Comparator.comparingInt(ThiSinh::getSbd));
        System.out.println("Success");
        showThiSinh();
    }
    
    public void countByKhoi(String khoi) {
        long cnt=this.thiSinh.stream()
                .filter(o -> (o instanceof KhoiA && khoi.equalsIgnoreCase("A"))
                    || (o instanceof KhoiB && khoi.equalsIgnoreCase("B"))
                    || (o instanceof KhoiC && khoi.equalsIgnoreCase("C")))
                .count();
        System.out.println("So luong ts thi khoi "+ khoi+ ": " + cnt);
    }
}
