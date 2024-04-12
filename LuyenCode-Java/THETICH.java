package luyencode3;

import java.util.Scanner;

public class THETICH {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong(), s = 0;
		for (int i = 1; i <= n; i++) {
			s += i*i*i;
		}
		System.out.println(s);
		
		sc.close();
	}
}
