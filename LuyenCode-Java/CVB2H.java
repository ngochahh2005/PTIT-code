package luyencode2;

import java.util.Scanner;

public class CVB2H {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			String bin = sc.next();
			long dec = Long.parseLong(bin, 2);
			String hex = Long.toHexString(dec);
			System.out.println(hex.toUpperCase());
		}
		
		sc.close();
	}
}
