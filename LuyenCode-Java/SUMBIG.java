package luyencode;

import java.util.Scanner;

public class SUMBIG {
	
	public static String sumBig(String a, String b) {
		if (a.length() < b.length()) {
			String c = a;
			a = b;
			b = c;
		}
		while (a.length() != b.length()) {
			b = "0" + b;
		}
		int c1 = 0;
		String s = "";
		for (int i = b.length() - 1; i >= 0; i--) {
			String s1 = "", s2 = "";
			s1 += a.charAt(i);
			s2 += b.charAt(i);
			int a1 = Integer.valueOf(s1);
			int b1 = Integer.valueOf(s2);
			int c = a1 + b1 + c1;
			c1 = c/10;
			c %= 10;
			s = String.valueOf(c)+ s;
		}
		if (c1 != 0) s = String.valueOf(c1) + s;
		
		return s;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String a = sc.nextLine();
		String b = sc.nextLine();
		System.out.println(sumBig(a,b));
		
		sc.close();
	}
}
