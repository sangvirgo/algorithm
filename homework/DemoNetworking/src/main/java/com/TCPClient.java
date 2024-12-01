/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.Scanner;

/**
 *
 * @author tansa
 */
public class TCPClient {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("127.0.0.1", 1234);

            // Tạo các luồng đọc và ghi dữ liệu
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            // Tạo luồng sẽ Xuất dữ liệu ra socket
            PrintWriter out = new PrintWriter(socket.getOutputStream());

            Scanner sc = new Scanner(System.in);

            System.out.println("Enter a line:");
            String st = sc.nextLine();

            System.out.println("Sent: 1  " + st);

            out.println(st);
            // chính thức đẩy dữ liệu này về phía client từ luồng dữ liệu đã tạo
            out.flush();

            String line = reader.readLine();
            System.out.println("Received: " + line);

            // đóng các luồng dữ liệu để quay về chờ tiếp các client khác
            reader.close();
            out.close();
            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
