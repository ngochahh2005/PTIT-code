package luyencode2;

import java.util.Scanner;

public class DEC2HEX {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			long dec = sc.nextLong();
			System.out.println(Long.toHexString(dec).toUpperCase());
		}
		
		sc.close();
	}
}
