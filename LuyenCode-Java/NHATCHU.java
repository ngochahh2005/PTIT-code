package luyencode2;

import java.util.Scanner;

public class NHATCHU {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next(), s = "";
		int[] dd = new int[200];
		for (int i = 0; i < str.length(); i++) {
			if (dd[(int)str.charAt(i)] == 0) {
				dd[(int)str.charAt(i)]++;
				s += Character.toString(str.charAt(i));
			}
		}
		System.out.println(s);
		
		sc.close();
	}
}
