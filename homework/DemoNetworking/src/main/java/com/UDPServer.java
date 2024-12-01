/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;

import java.net.InetAddress;
import java.net.DatagramPacket;
import java.net.DatagramSocket;

/**
 *
 * @author tansa
 */
public class UDPServer {
    public static void main(String[] args) {
        try {
            DatagramSocket datagramSocket = new DatagramSocket(1234);
            byte[] readBuffer = new byte[1024]; // Lưu dữ liệu đọc được
            byte[] writeBuffer = null; // Chứa dữ liệu gửi tới người nhận

            System.out.println("Listening...");

            while (true) {
                DatagramPacket receivePacket = new DatagramPacket(readBuffer, readBuffer.length);
                datagramSocket.receive(receivePacket);

                String line = new String(receivePacket.getData());
                System.out.println("Received: " + line);

                writeBuffer = line.toUpperCase().getBytes();
                InetAddress host = receivePacket.getAddress();
                int port = receivePacket.getPort();

                DatagramPacket sendPacket = new DatagramPacket(writeBuffer, writeBuffer.length, host, port);
                System.out.println("Sent: " + line.toUpperCase());
                datagramSocket.send(sendPacket);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
