package com.sang.theory4;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Image;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.ImageIcon;

public class Panelss extends JFrame {
//	JPanel là một thành phần trong thư viện Swing của Java, được sử dụng để tạo và tổ chức các thành phần 
//	giao diện người dùng khác nhau. Nó là một container nhẹ, có thể chứa các tTihành phần khác như JButton, 
//	JLabel, JTextField, và thậm chí là các JPanel khác.
	Panelss() {
		JPanel redPanel=new JPanel();
		redPanel.setBackground(Color.red);
		redPanel.setBounds(0, 0, 250, 250);
		redPanel.setLayout(new BorderLayout());
//		Tác dụng: Đặt trình quản lý bố cục của redPanel thành BorderLayout.
//		Giải thích: BorderLayout là một trong những layout manager cơ bản của Swing, sắp xếp các 
//		thành phần con theo năm khu vực: NORTH, SOUTH, EAST, WEST, và CENTER. Mỗi khu vực chỉ có thể chứa
//		một thành phần. Khi bạn thêm một thành phần vào redPanel với BorderLayout, bạn có thể chỉ định khu vực
//		mà thành phần đó sẽ chiếm. Nếu không chỉ định, thành phần sẽ được đặt vào khu vực CENTER mặc định.
		
		JPanel bluePanel=new JPanel();
		bluePanel.setBackground(Color.blue);
		bluePanel.setBounds(250, 0, 250, 250);
 		
		JPanel greenPanel=new JPanel();
		greenPanel.setBackground(Color.green);
		greenPanel.setBounds(0, 250, 500, 250);
		greenPanel.setLayout(null);
		
		ImageIcon imagee=new ImageIcon("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory4/a.png");
		Image scaledImage = imagee.getImage().getScaledInstance(50, 50, Image.SCALE_SMOOTH);
		ImageIcon image=new ImageIcon(scaledImage);
		
		JLabel labell=new JLabel();
		labell.setText("Sang Sang");
		labell.setIcon(image);
		labell.setBounds(100, 100, 90, 90);
		
		// Đặt vị trí ngang của toàn bộ label (bao gồm cả icon và text) ở giữa container của nó
		labell.setHorizontalAlignment(JLabel.CENTER); 

		// Đặt vị trí dọc của toàn bộ label (bao gồm cả icon và text) ở giữa container của nó
		labell.setVerticalAlignment(JLabel.CENTER); 

		// Đặt vị trí ngang của văn bản so với icon là ở giữa icon (các giá trị hợp lệ khác là JLabel.LEFT và JLabel.RIGHT)
		labell.setHorizontalTextPosition(JLabel.CENTER); 

		// Đặt vị trí dọc của văn bản so với icon là ở dưới icon (các giá trị hợp lệ khác là JLabel.TOP và JLabel.CENTER)
		labell.setVerticalTextPosition(JLabel.BOTTOM);

		
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLayout(null);
		this.setSize(750, 750);
		this.setVisible(true);
		this.add(redPanel);
		this.add(bluePanel);
		this.add(greenPanel);
		
		greenPanel.add(labell);
	}
}