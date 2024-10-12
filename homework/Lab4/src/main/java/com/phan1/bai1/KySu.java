/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai1;

/**
 *
 * @author soang
 */
public class KySu extends CanBo {
    private String nganhDaoTao;

    public KySu(String name, int age, String gender, String address, String nganhDaoTao) {
        super(name, age, gender, address);
        this.nganhDaoTao = nganhDaoTao;
    }

    public String getNganhDaoTao() {
        return nganhDaoTao;
    }

    public void setNganhDaoTao(String nganhDaoTao) {
        this.nganhDaoTao = nganhDaoTao;
    }

    @Override
    public String toString() {
        return "KySu{" + "nganhDaoTao=" + nganhDaoTao+ '\''+ ", name='" + name + '\'' +", age=" + age +", gender='" + gender + '\'' +", address='" + address + '\'' +'}';
    }

 
}
