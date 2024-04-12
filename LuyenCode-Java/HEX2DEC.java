package luyencode2;

import java.util.Scanner;

public class HEX2DEC {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			String hex = sc.next();
			hex = hex.toLowerCase();
			System.out.println(Long.parseLong(hex, 16));
		}
		
		sc.close();
	}
}
