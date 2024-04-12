package luyencode3;

import java.util.Scanner;

public class DEMSO {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		int count = 0;
		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if (i < str.length()-1) {
				char ch1 = str.charAt(i+1);
				if (Character.isDigit(ch) && !Character.isDigit(ch1)) count++;
			} else {
				if (Character.isDigit(ch)) count++;
			}
		}
		System.out.println(count);
		
		sc.close();
	}
}
