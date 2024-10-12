/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai1;

/**
 *
 * @author soang
 */
public class NhanVien extends CanBo{
    private String congViec;

    public NhanVien(String name, int age, String gender, String address, String congViec) {
        super(name, age, gender, address);
        this.congViec = congViec;
    }

    public String getCongViec() {
        return congViec;
    }

    public void setCongViec(String congViec) {
        this.congViec = congViec;
    }

    @Override
    public String toString() {
        return "NhanVien{" + "congViec=" + congViec+ '\''+ ", name='" + name + '\'' +", age=" + age +", gender='" + gender + '\'' +", address='" + address + '\'' +'}';
    }
    
    
}
