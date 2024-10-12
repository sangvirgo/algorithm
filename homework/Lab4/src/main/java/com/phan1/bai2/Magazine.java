/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai2;

/**
 *
 * @author soang
 */
public class Magazine extends Document {
    private int issueNumber;
    private int issueMonth;

    public int getIssueNumber() {
        return issueNumber;
    }

    public void setIssueNumber(int issueNumber) {
        this.issueNumber = issueNumber;
    }

    public int getIssueMonth() {
        return issueMonth;
    }

    public void setIssueMonth(int issueMonth) {
        this.issueMonth = issueMonth;
    }

    public Magazine(String id, String publisher, int number, int issueNumber, int issueMonth) {
        super(id, publisher, number);
        this.issueNumber = issueNumber;
        this.issueMonth = issueMonth;
    }

    @Override
    public String toString() {
        return "Magazine{" + "issueNumber='" + issueNumber + '\'' +
                ", issueMonth='" + issueMonth + '\'' +
                ", id='" + id + '\'' +
                ", nxb='" + publisher + '\'' +
                ", number='" + number + '\'' +
                '}';
    } 
}
