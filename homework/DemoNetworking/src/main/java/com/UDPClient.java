package com;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDPClient {
    public static void main(String[] args) {
        try {
            DatagramSocket datagramSocket = new DatagramSocket();
            byte[] writeBuffer = "Hello, Server".getBytes(); // Chứa dữ liệu gửi tới người nhận
            InetAddress serverAddress = InetAddress.getByName("127.0.0.1");
            int serverPort = 1234;

            DatagramPacket sendPacket = new DatagramPacket(writeBuffer, writeBuffer.length, serverAddress, serverPort);
            datagramSocket.send(sendPacket);
            System.out.println("Sent: " + new String(writeBuffer));

            byte[] readBuffer = new byte[1024]; // Lưu dữ liệu đọc được
            DatagramPacket receivePacket = new DatagramPacket(readBuffer, readBuffer.length);
            datagramSocket.receive(receivePacket);

            String line = new String(receivePacket.getData(), 0, receivePacket.getLength());
            System.out.println("Received: " + line);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}