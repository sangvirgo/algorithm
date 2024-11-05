/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.test;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

/**
 *
 * @author soang
 */
public class TuyenSinh {
    List<Student> students;

    public TuyenSinh() {
        this.students=new ArrayList<>();
    }
    
    public void addStudent(Student temp) {
        students.add(temp);
    }
    
    public void display() {
        this.students.forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByCandidateNumber(int candidateNumber) {
        this.students.stream()
                .filter(o->o.getSdb()==candidateNumber)
                .forEach(o ->System.out.println(o.toString()));
    }
    
    
    public void searchByKhoi(String temp) {
        String khoi = temp.toUpperCase();
        this.students.stream()
                .filter(o-> (o instanceof A && khoi.equalsIgnoreCase("A"))
                        || (o instanceof B && khoi.equalsIgnoreCase("B"))
                        || (o instanceof C && khoi.equalsIgnoreCase("C"))
                ).forEach(o -> System.out.println(o.toString()));
    }
    
    
    public void sortThiSinhBySBD() {
        this.students.sort(Comparator.comparingInt(Student::getSdb));
        System.out.println("Success");
        display();
    }
    
    
    public void countByKhoi(String khoi) {
        long cnt=this.students.stream()
                .filter(o -> (o instanceof A && khoi.equalsIgnoreCase("A"))
                       || (o instanceof B && khoi.equalsIgnoreCase("B"))
                       || (o instanceof C && khoi.equalsIgnoreCase("C"))
                ).count();
        System.out.println(cnt);
    }
}
