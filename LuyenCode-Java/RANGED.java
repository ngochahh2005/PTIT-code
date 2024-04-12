package luyencode2;

import java.util.Scanner;

public class RANGED {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long a1 = sc.nextLong(), b1 = sc.nextLong();
		long a2 = sc.nextLong(), b2 = sc.nextLong();
		if (a1 > a2) {
			long a = a1;
			a1 = a2;
			a2 = a;
			long b = b1;
			b1 = b2;
			b2 = b;
		}
		if (b1 >= a2) System.out.println("YES");
		else System.out.println("NO");
		
		sc.close();
	}
}
