/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai1;

/**
 *
 * @author soang
 */
public class CongNhan extends CanBo {
    private int level;

    public CongNhan(String name, int age, String gender, String address, int level) {
        super(name, age, gender, address);
        this.level = level;
    }

    public int getLevel() {
        return level;
    }

    public void setLevel(int level) {
        this.level = level;
    }
    @Override
    public String toString() {
        return "Cong Nhan{" + "level='"+level + '\''+ ", name='" + name + '\'' +", age=" + age +", gender='" + gender + '\'' +", address='" + address + '\'' +'}';
    }
}
