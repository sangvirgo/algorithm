package com.sang.theory4;

import java.awt.Color;

import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame extends JFrame{
	MyFrame() {
		//GUI
		this.setTitle("Sang Love Han");
		
//		nothing turn off the this
//		this.setDefaultCloseOperation(Jthis.DO_NOTHING_ON_CLOSE);
		
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
//		no change the size of this
//		this.setResizable(false);

		this.setSize(500,500); // set x-dimension , set y-dimension
		this.setVisible(true); //make this visible
		
//		set logo of this
		ImageIcon image = new ImageIcon("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory4/hinhpeiuhinhpeiu.jpg");
		this.setIconImage(image.getImage());
		
		// set color
//		this.getContentPane().setBackground(Color.green);
		this.getContentPane().setBackground(new Color(255, 6, 4));
		
		
	}
}