/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai1;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

/**
 *
 * @author soang
 */
public class QuanLyCanBo {
    private List<CanBo> officers;

    public QuanLyCanBo() {
        this.officers=new ArrayList<>();
    }
    
    public void add(CanBo canBo) {
        this.officers.add(canBo);
    }
    
    public List<CanBo> searchOfficerByName(String name) {
        return this.officers.stream().filter(o 
                ->o.getName().contains(name)).collect(Collectors.toList());
    }
    
    public void showList() {
        this.officers.forEach(o -> System.out.println(o.toString()));
    }
}
    