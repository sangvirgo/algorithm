package com.sang.theory4;

import java.awt.Color;
import java.awt.Font;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.BorderFactory;

public class Buttonn extends JFrame implements ActionListener{
	JButton buttonn;
	JLabel labell;
	boolean switchh=false;
	
	Buttonn() {
		ImageIcon pointerrr=new ImageIcon("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory4/pointer.png");
		Image scaledImage=pointerrr.getImage().getScaledInstance(100, 50,  Image.SCALE_SMOOTH);
		ImageIcon pointerr=new ImageIcon(scaledImage);
		
		
		
//		create label
		labell= new JLabel();
		ImageIcon pointerrr1=new ImageIcon("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory4/hinhpeiuhinhpeiu.jpg");
		Image scaledImage1=pointerrr1.getImage().getScaledInstance(150, 300,  Image.SCALE_SMOOTH);
		ImageIcon pointerr1=new ImageIcon(scaledImage1);
		labell.setIcon(pointerr1);
		labell.setBounds(250, 250, 150, 300);
		labell.setVisible(switchh);
		
		
		
		buttonn= new JButton();
		buttonn.setBounds(200, 100, 230, 130);
		buttonn.addActionListener(this);
		buttonn.setText("Click me!");
		buttonn.setFocusable(false);
//		Khi nào sử dụng setFocusable
//		Form Inputs: Các thành phần nhập liệu như JTextField, JTextArea, JButton, v.v. thường được đặt setFocusable(true) để người dùng có thể tương tác với chúng thông qua bàn phím.
//		Custom Components: Nếu bạn tạo ra một thành phần giao diện người dùng tùy chỉnh và muốn nó có thể nhận focus, bạn cần đảm bảo rằng setFocusable(true) được gọi.
//		Focus Management: Trong một số trường hợp, bạn có thể muốn ngăn chặn một thành phần nhất định nhận focus để quản lý tập trung người dùng vào các thành phần quan trọng hơn.
		buttonn.setIcon(pointerr);
		buttonn.setHorizontalTextPosition(JButton.CENTER);
		buttonn.setVerticalTextPosition(JButton.BOTTOM);
		buttonn.setFont(new Font("Comic Sans", Font.BOLD, 30));
		// Thiết lập khoảng cách giữa biểu tượng và văn bản
		buttonn.setIconTextGap(10);
		buttonn.setForeground(Color.red);
		buttonn.setBackground(Color.yellow);
//		buttonn.setBorder(BorderFactory.createEtchedBorder()); là một phương thức dùng để thiết lập đường viền (border) cho thành phần JButton.
		buttonn.setBorder(BorderFactory.createEtchedBorder());
		buttonn.setBorder(BorderFactory.createLineBorder(Color.red));
//		vo hieu qua 
//		buttonn.setEnabled(false);
		
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setSize(600, 600);
		this.setLayout(null);
		this.setVisible(true);
		this.add(buttonn);
		this.add(labell);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource()==buttonn) {
			System.out.println("Sang Sang Sang ");
//			if(!switchh) {
//				labell.setVisible(true);
//				switchh=true;
//			}
//			else {
//				labell.setVisible(!true);
//				switchh=false;
//			}
		}
	}
}