/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;


//co ba cachs khoi tao statement
//


import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 *
 * @author soang
 */
public class test2 {
    public static void main(String[] args) {
        List<Integer> a=new ArrayList<>();
        
        a.add(4);
        a.add(7);
        System.out.println(a.toString());
        
        
       Set<Integer> b=new HashSet<>();
       b.add(5);
       b.add(6);
       b.add(5);
        System.out.println(b.toString());
        
        
       b.addAll(a);
        
       b.remove(5);
       System.out.println(b.toString());

       
//       b.removeAll
//      b.retainAll
        System.out.println(b.contains(6));
        
        System.out.println(b.size());
        
        
        List<String> names=new ArrayList<>();
        
        names.add("Sang");
        names.add("Han");
        names.add("Su");
        names.set(2, "Han");
//        System.out.println(names.toString());
        
        
        names.add("hihih");
        
        for(String temp: names) {
            System.out.println(temp);
        }
        
        Map<String, Double> mapp=new HashMap<>();
        mapp.put("af", 12.4);
        mapp.put("fsgd", 13.3);
        
        System.out.println(mapp.toString());
        
        
        
    }
}
