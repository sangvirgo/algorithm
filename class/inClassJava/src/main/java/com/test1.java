/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 *
 * @author soang
 */
public class test1 {

    public static void main(String[] args) {
        List<Integer> listArr = new ArrayList<>();
        listArr.add(20);
        listArr.add(30);
        System.out.println(listArr);
        
        Iterator<Integer> iter=listArr.iterator();
        
        while (iter.hasNext()) { // Check if there's a next element
            Integer number = iter.next(); // Get the next element
            System.out.println(number); // Print the element
        }    }
}
