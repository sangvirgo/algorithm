/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.phan1.bai2;

import java.util.Scanner;

/**
 *
 * @author soang
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ManagerDocument managerDocument= new ManagerDocument();
        while(true) {
            System.out.println("Application Manager Document");
            System.out.println("Enter 1: To insert document");
            System.out.println("Enter 2: To search document by category: ");
            System.out.println("Enter 3: To show information documents");
            System.out.println("Enter 4: To remove document by id");
            System.out.println("Enter 5: To exit:");
            String input=sc.nextLine();
            
            switch(input) {
                case "1": {
                    System.out.println("Enter a: to insert Book");
                    System.out.println("Enter b: to insert Newspaper");
                    System.out.println("Enter c: to insert Magazine");
                    String type = sc.nextLine();
                    switch(type) {
                        case "a": {
                            System.out.print("Enter ID: ");
                            String id = sc.nextLine();
                            System.out.print("Enter Publisher:");
                            String nxb = sc.nextLine();
                            System.out.print("Enter number: ");
                            int number = sc.nextInt();
                            System.out.print("Enter author: ");
                            sc.nextLine();
                            String author = sc.nextLine();
                            System.out.print("Enter page number: ");
                            int pageNumber = sc.nextInt();
                            Document book = new Book(id, nxb, number, author,
                            pageNumber);
                            managerDocument.addDoc(book);
                            System.out.println(book.toString());
                            sc.nextLine();
                            break;
                        }
                        case "b": {
                            System.out.print("Enter ID: ");
                            String id = sc.nextLine();
                            System.out.print("Enter Publisher:");
                            String nxb = sc.nextLine();
                            System.out.print("Enter number: ");
                            int number = sc.nextInt();
                            System.out.print("Enter Day issue: ");
                            int dayIssue = sc.nextInt();

                            Document newspaper = new Newspaper(id, nxb, number,
                            dayIssue);
                            managerDocument.addDoc(newspaper);
                            System.out.println(newspaper.toString());
                            sc.nextLine();
                            break;
                        }
                        case "c": {
                            System.out.print("Enter ID: ");
                            String id = sc.nextLine();
                            System.out.print("Enter Publisher:");
                            String nxb = sc.nextLine();
                            System.out.print("Enter number: ");
                            int number = sc.nextInt();
                            System.out.print("Enter issue number : ");
                            int issueNumber = sc.nextInt();
                            System.out.print("Enter issue month : ");
                            int issueMonth = sc.nextInt();
                            Document journal = new Magazine(id, nxb, number, issueNumber,
                            issueMonth);
                            managerDocument.addDoc(journal);
                            System.out.println(journal.toString());
                            sc.nextLine();
                            break;
                        }
                        default:
                            break;
                    }
                    break;
                }
                case "2": {
                    System.out.println("Enter a to search book");
                    System.out.println("Enter b to search newspaper");
                    System.out.println("Enter a to search magazine");
                    String choise = sc.nextLine();
                    switch (choise) {
                        case "a": {
                            managerDocument.searchByBook();
                            break;
                        }
                        case "b": {
                            managerDocument.searchByNewspaper();
                            break;
                        }

                        case "c": {
                            managerDocument.searchByMagazine();
                            break;
                        }
                        default: {
                            System.out.println("Invalid");
                            break;
                        }
                    }
                    break;
                }
                case "3": {
                    managerDocument.showInfo();
                    break;
                    }
                case "4": {
                    System.out.print("Enter id to remove: ");
                    String id = sc.nextLine();
                    System.out.println(managerDocument.deleteDoc(id) ?
                    "Success" : "Fail");
                    break;
                    }
                case "5": {
                    return;
                    }
                default:{
                    System.out.println("Invalid");
                    continue;
                    }
            }
        }
    }
}
