package com.sang.theory3;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.UnsupportedAudioFileException;

public class Main {

	public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
		// TODO Auto-generated method stub
		/*

//		Doc file
		File file=new File("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory3/haha.txt");
		
//		xem co ton tai khong
		if(file.exists()) {
			System.out.println("That file exists!");
//			lay duong dan
			System.out.println(file.getPath());
//			lay duong dan tuyet doi
			System.out.println(file.getAbsolutePath());
//			xoa file
			
//			file.delete();
		} else {
			System.out.println("That file doesn't exist");
		}

//		FileWrite
		FileWriter filewrite;
		try {
			filewrite = new FileWriter("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory3/haha.txt");
			filewrite.write("sang sang sang sang sang\n");
//			Trong đoạn code bạn đưa ra, append là một phương thức của lớp FileWriter. Nó được sử dụng
//			để thêm nội dung mới vào cuối của một file hiện có.
//			Nếu file chưa tồn tại, phương thức append sẽ tạo ra một file mới và ghi nội dung vào đó.
			filewrite.append("Han Han Han Han Han Han Han");
			filewrite.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
//		FileReader
		
		try {
			FileReader filereader=new FileReader("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory3/art.txt");
			int character=filereader.read();
			while(character!=-1) {
				System.out.print((char)character);
				character=filereader.read();
			}
			filereader.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		 */

//		audio
		Scanner scanner=new Scanner(System.in);
		File file= new File("/home/soang/Algorithm/Java_Full_Course/Theory/src/com/sang/theory3/lnd.wav");
		AudioInputStream audioStream=AudioSystem.getAudioInputStream(file);
		Clip clip =AudioSystem.getClip();
		clip.open(audioStream);
		
		String response="";
		
		while(response!="Q") {
			System.out.println("P=Play   R=Restart    S=Stop     Q=Quit");
			System.out.println("Enter your choice: ");
			response=scanner.nextLine();
			response.toUpperCase();
			
			if(response.equals("P")) {
				clip.start();
			} else if(response.equals("S")) {
				clip.stop();
			} else if(response.equals("R")) {
				clip.setMicrosecondPosition(0);
			} else if(response.equals("Q")) {
				clip.stop();
			} else {
				System.out.println("not a valid reponse!");
			}
		}
	}

}