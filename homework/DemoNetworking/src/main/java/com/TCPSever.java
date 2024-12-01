/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/*
 *
 * @author tansa
 */
package com;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class TCPSever {
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(1234);
            System.out.println("Listening...");

            while (true) {
                Socket socket = serverSocket.accept(); // lắng nghe yêu cầu từ client

                // Tạo các luồng đọc và ghi dữ liệu
                BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                PrintWriter out = new PrintWriter(socket.getOutputStream()); 

                // Xử lý dữ liệu từ client
                String line = reader.readLine();
                System.out.println("Received: " + line);
                System.out.println("Sent: " + line.toUpperCase());

                out.println(line.toUpperCase()); // Gửi lại kết quả
                out.flush();

                // Đóng các luồng
                reader.close();
                out.close();
                socket.close();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

