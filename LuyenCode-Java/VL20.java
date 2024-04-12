package luyencode;

import java.util.Scanner;

public class VL20 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s1 = sc.next(), s2 = sc.next();
		s1 = s1.toUpperCase();
		s2 = s2.toUpperCase();
		char a = s1.charAt(0), b = s2.charAt(0);
		for (char i = a; i <= b; i++)
		{
			System.out.print(i);
			if (i == b) break;
			System.out.print(" ");
		}
		
		sc.close();
	}
}
