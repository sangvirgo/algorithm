/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai2;

/**
 *
 * @author soang
 */
public class Book extends Document {
    private String author;
    private int numPage;

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public int getNumPage() {
        return numPage;
    }

    public void setNumPage(int numPage) {
        this.numPage = numPage;
    }

    public Book(String id, String publisher, int number, String author, int numPage) {
        super(id, publisher, number);
        this.author = author;
        this.numPage = numPage;
    }

    @Override
    public String toString() {
        return "Book{" + "author='" + author + '\''+
                ", numPage='" + numPage + '\''+
                ", id='" + id + '\'' +
                ", nxb='" + publisher + '\'' +
                ", number='" + number + '\'' +
                '}';
    }
}
