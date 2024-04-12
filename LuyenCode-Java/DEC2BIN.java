package luyencode;

import java.util.Scanner;

public class DEC2BIN {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			long n = sc.nextLong();
			String s = "";
			while (n != 0) {
				long a = n % 2;
				n /= 2;
				s += String.valueOf(a);
			}
			for (int i = s.length()-1; i >= 0; i--)
				System.out.print(s.charAt(i));
			if (t == 0) break;
			System.out.println();
		}
		
		sc.close();
	}
}
