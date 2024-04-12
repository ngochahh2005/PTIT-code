package luyencode2;

import java.util.Scanner;

public class STR03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		str = str.toLowerCase();
		int t = sc.nextInt();
		while (t-- > 0) {
			char ch = sc.next().charAt(0);
			ch = Character.toLowerCase(ch);
			int d = 0;
			for (int i = 0; i < str.length(); i++) {
				if (str.charAt(i) == ch) d++;
			}
			System.out.println(d);
		}
		
		sc.close();
	}
}
