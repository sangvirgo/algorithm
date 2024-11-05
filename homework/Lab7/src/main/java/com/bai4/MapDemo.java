/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.bai4;

import com.bai3.Student;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/**
 *
 * @author soang
 */
public class MapDemo {
    public static void main(String[] args) {
        Map<String, Student> map=new HashMap<>();
        Student sv1 = new Student();
        sv1.name = "Tuấn";
        sv1.major = "CNTT";
        sv1.marks = 7.0;
        map.put(sv1.name, sv1);
        
        Student sv2 = new Student();
        sv2.name = "Hương";
        sv2.major = "Kinh tế";
        sv2.marks = 8.5;
        map.put(sv2.name, sv2);

        Student sv3 = new Student();
        sv3.name = "Nam";
        sv3.major = "Điện tử";
        sv3.marks = 6.2;
        map.put(sv3.name, sv3);
        
        
        Set<String> keys = map.keySet();
        for(String name : keys){
            Student sv = map.get(name);
            System.out.println(">Họ và tên: " + sv.name);
            System.out.println(">Học lực: " + sv.getGrade());
        }
    }
}
