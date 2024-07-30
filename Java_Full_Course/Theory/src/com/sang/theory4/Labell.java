package com.sang.theory4;

import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Font;
import javax.swing.JLabel;
import javax.swing.border.Border;
import javax.swing.BorderFactory;
import javax.swing.ImageIcon;

public class Labell extends JFrame {
    Labell() {
        // Tạo một đối tượng JLabel
        JLabel label = new JLabel();

        // Tạo một đối tượng ImageIcon từ đường dẫn hình ảnh
        ImageIcon image = new ImageIcon("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory4/hinhpeiuhinhpeiu.jpg");

        // Thiết lập văn bản cho label
        label.setText("Sang Sangggg");

        // Thiết lập biểu tượng (icon) cho label
        label.setIcon(image);

        // Thiết lập vị trí văn bản theo chiều ngang so với biểu tượng (icon)
        label.setHorizontalTextPosition(JLabel.CENTER);

        // Thiết lập vị trí văn bản theo chiều dọc so với biểu tượng (icon)
        label.setVerticalTextPosition(JLabel.TOP);

        // Thiết lập màu văn bản cho label
        label.setForeground(new Color(0x00FF00));

        // Thiết lập phông chữ cho văn bản của label
        label.setFont(new Font("MV Boli", Font.ROMAN_BASELINE, 25));

        // Thiết lập khoảng cách giữa văn bản và biểu tượng
        label.setIconTextGap(10);

        // Thiết lập màu nền cho label
        label.setBackground(Color.black);

        // Thiết lập chế độ hiển thị màu nền (bắt buộc để màu nền hiển thị)
        label.setOpaque(true);

        // Tạo một đường viền cho label
        Border border = BorderFactory.createLineBorder(new Color(53, 199, 34));

        // Thiết lập đường viền cho label
        label.setBorder(border);

        // Thiết lập vị trí của label theo chiều dọc trong khung
        label.setVerticalAlignment(JLabel.CENTER);

        // Thiết lập vị trí của label theo chiều ngang trong khung
        label.setHorizontalAlignment(JLabel.CENTER);

        // Thiết lập hành động khi đóng cửa sổ (EXIT_ON_CLOSE để thoát ứng dụng)
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Thiết lập kích thước của cửa sổ
        this.setSize(600, 600);

        // Hiển thị cửa sổ
        this.setVisible(true);
        
     // Đặt vị trí và kích thước của label (tọa độ x, y, chiều rộng, chiều cao)
     // label.setBounds(100, 100, 250, 250);

     // Đặt trình quản lý bố cục của khung thành null, cho phép định vị tuyệt đối các thành phần
     // this.setLayout(null);

        // Thêm label vào cửa sổ
        this.add(label);

        // Điều chỉnh kích thước của cửa sổ để vừa với nội dung
        this.pack();
    }
}
