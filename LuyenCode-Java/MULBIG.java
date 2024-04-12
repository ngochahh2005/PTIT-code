package luyencode2;

import java.util.Scanner;

public class MULBIG {
	public static String mul(String b, Character a) {
		String s = "";
		int m, du  = 0, a1 = Character.getNumericValue(a);
		for (int i = b.length()-1; i >= 0; i--) {
			int b1 = Character.getNumericValue(b.charAt(i)); 
			m = a1 * b1 + du;
			//System.out.println(m + " = " + a1 + " * " + b1 + " + " + du);
			du = m / 10;
			m %= 10;
			s = Integer.toString(m) + s;
		}
		if (du != 0) s = Integer.toString(du) + s;
		return s;
	}
	public static String sum(String a, String b) {
		if (a.length() < b.length()) {
			String temp = a;
			a = b;
			b = temp;
		}
		while (a.length() != b.length()) {
			b = "0" + b;
		}
		String s = "";
		int sum = 0, du = 0;
		for (int i = a.length()-1; i >= 0; i--) {
			int a1 = Character.getNumericValue(a.charAt(i));
			int b1 = Character.getNumericValue(b.charAt(i));
			sum = a1 + b1 + du;
			du = sum/10;
			sum %= 10;
			s = Integer.toString(sum) + s;
		}
		if (du != 0) s = Integer.toString(du) + s;
		return s;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String a = sc.next(), b = sc.next();
		if (a.length() < b.length()) {
			String temp = a;
			a = b;
			b = temp;
		}
		String s, str = "", d = "";
		for (int i = b.length() - 1; i >= 0; i--) {
			s = mul(a, b.charAt(i));
			//System.out.println(s);
			str = sum(str, s + d);
			d += "0";
		}
		if (a.equals("0") || b.equals("0")) System.out.println("0");
		else System.out.println(str);
		
		sc.close();
	}
}
