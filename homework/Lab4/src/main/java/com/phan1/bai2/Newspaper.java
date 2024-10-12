/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai2;

/**
 *
 * @author soang
 */
public class Newspaper extends Document{
    private int issueDay;

    public int getIssueDay() {
        return issueDay;
    }

    public void setIssueDay(int issueDay) {
        this.issueDay = issueDay;
    }

    public Newspaper(String id, String publisher, int number, int issueDay) {
        super(id, publisher, number);
        this.issueDay = issueDay;
    }

    @Override
    public String toString() {
        return "Newspaper{" + "issueDay='" + issueDay + '\'' +
                ", id='" + id + '\'' +
                ", nxb='" + publisher + '\'' +
                ", number='" + number + '\'' +
                '}';
    }
    
    
}
