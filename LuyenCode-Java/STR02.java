package luyencode2;

import java.util.Scanner;

public class STR02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		String str = sc.nextLine();
		while (t-- > 0) {
			str = sc.nextLine();
			StringBuilder sb = new StringBuilder(str);
			for (int i = 0; i < sb.length(); i++) {
				char ch = sb.charAt(i);
				sb.setCharAt(i, Character.toLowerCase(ch));
			}
			sb.setCharAt(0, Character.toUpperCase(sb.charAt(0))); 
			for (int i = 1; i < sb.length(); i++) {
				if (sb.charAt(i-1) == ' ') {
					sb.setCharAt(i, Character.toUpperCase(sb.charAt(i)));
				}
			}
			System.out.println(sb.toString());
		}
		
		sc.close();
	}
}
