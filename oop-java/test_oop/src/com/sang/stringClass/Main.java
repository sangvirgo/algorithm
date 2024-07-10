package com.sang.stringClass;
/*
delete(): Xóa một đoạn ký tự từ chuỗi.

java
Copy code
sb.delete(5, 10);
replace(): Thay thế một đoạn ký tự bằng một chuỗi khác.

java
Copy code
sb.replace(0, 5, "Hi");
reverse(): Đảo ngược chuỗi.

java
Copy code
sb.reverse();
 */

public class Main {

	public static void main(String[] args) {
		StringBuilder sb= new StringBuilder("Sang nek");
//		at the end of string 
		sb.append(" huihihihi");
		System.out.println(sb);
//		insert at the position 
		sb.insert(8, "Java");
		System.out.println(sb);

	}

}
