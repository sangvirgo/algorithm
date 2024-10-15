package com.phan1.bai1;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        QuanLyCanBo quanLyCanBo = new QuanLyCanBo(); 
        while (true) {
            System.out.println("Application Manager Officer");
            System.out.println("Enter 1: Them Can Bo");
            System.out.println("Enter 2: Tim Kiem Can Bo Theo Ten: ");
            System.out.println("Enter 3: Hien Thi Thong Tin");
            System.out.println("Enter 4: To exit:");
            String line = scanner.nextLine();
            switch (line) {
                case "1": {
                    System.out.println("Enter a: Them Ky Su");
                    System.out.println("Enter b: Them Cong Nhan");
                    System.out.println("Enter c: Them Nhan Vien");
                    String type = scanner.nextLine();
                    switch (type) {
                        case "a": {
                            System.out.print("Enter name: ");
                            String name = scanner.nextLine();
                            System.out.print("Enter age:");
                            int age = scanner.nextInt();
                            System.out.print("Enter gender: ");
                            scanner.nextLine();
                            String gender = scanner.nextLine();
                            System.out.print("Enter address: ");
                            String address = scanner.nextLine();
                            System.out.print("Enter branch: ");
                            String branch = scanner.nextLine();
                            CanBo engineer = new KySu(name, age, gender, address, branch);
                            quanLyCanBo.add(engineer);  // Sửa lại cho đúng đối tượng
                            System.out.println(engineer.toString());
                            break;
                        }
                        case "b": {
                            System.out.print("Enter name: ");
                            String name = scanner.nextLine();
                            System.out.print("Enter age:");
                            int age = scanner.nextInt();
                            System.out.print("Enter gender: ");
                            scanner.nextLine();
                            String gender = scanner.nextLine();
                            System.out.print("Enter address: ");
                            String address = scanner.nextLine();
                            System.out.print("Enter level: ");
                            int level = scanner.nextInt();
                            CanBo worker = new CongNhan(name, age, gender, address, level);
                            quanLyCanBo.add(worker);  
                            System.out.println(worker.toString());
                            scanner.nextLine();
                            break;
                        }
                        case "c": {
                            System.out.print("Enter name: ");
                            String name = scanner.nextLine();
                            System.out.print("Enter age: ");
                            int age = scanner.nextInt(); 
                            System.out.print("Enter gender: ");
                            scanner.nextLine();
                            String gender = scanner.nextLine();
                            System.out.print("Enter address: ");
                            String address = scanner.nextLine();
                            System.out.print("Enter task: ");
                            String task = scanner.nextLine();
                            CanBo staff = new NhanVien(name, age, gender, address, task);
                            quanLyCanBo.add(staff);  
                            System.out.println(staff.toString());
                            break;
                        }
                        default:
                            System.out.println("Invalid");
                            break;
                    }
                    break;
                }
                case "2": {
                    System.out.print("Enter name to search: ");
                    String name = scanner.nextLine();
                    quanLyCanBo.searchOfficerByName(name).forEach(officer -> {
                        System.out.println(officer.toString());
                    });
                    break;
                }
                case "3": {
                    quanLyCanBo.showList();  
                    break;
                }
                case "4": {
                    return;
                }
                default:
                    System.out.println("Invalid");
                    continue;
            }
        }
    }
}
