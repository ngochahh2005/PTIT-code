package luyencode;

import java.util.Scanner;

public class VL10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s = sc.next();
		char dau = s.charAt(0);
		if (dau == '-') System.out.println(s.length() - 1);
		else System.out.println(s.length());
		
		sc.close();
	}
}
