package luyencode2;

import java.util.Scanner;

public class HEX2BIN {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			String hex = sc.next();
			hex = hex.toLowerCase();
			long dec = Long.parseLong(hex, 16);
			String bin = Long.toBinaryString(dec);
			System.out.println(bin);
		}
		
		sc.close();
	}
}
