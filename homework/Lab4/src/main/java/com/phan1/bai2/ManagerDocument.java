/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai2;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author soang
 */
public class ManagerDocument {
    List<Document> documents;

    public ManagerDocument() {
        this.documents=new ArrayList<>();
    }
    
    public void addDoc(Document document) {
        this.documents.add(document);
    }
    
    public boolean deleteDoc(String id) {
        Document doc = this.documents.stream().filter(o -> o.getId().equals(id)).findFirst().orElse(null);
        if(doc==null) {
            return false;
        }
        this.documents.remove(doc);
        return true;
    }
    
    public void showInfo() {
        this.documents.forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByBook() {
        this.documents.stream().filter(o -> o instanceof Book).forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByNewspaper() {
        this.documents.stream().filter(o -> o instanceof Newspaper).forEach(o -> System.out.println(o.toString()));
    }
    
    public void searchByMagazine() {
        this.documents.stream().filter(o -> o instanceof Magazine).forEach(o -> System.out.println(o.toString()));
    }
}
