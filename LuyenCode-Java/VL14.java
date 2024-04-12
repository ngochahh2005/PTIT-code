package luyencode;

import java.util.Scanner;

public class VL14 {
	public static int gcd(int a, int b) {
		if (a < b) {
			int t = a;
			a = b;
			b = t;
		}
		if (b == 0) return a;
		else return gcd(b, a % b);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt();
		if (a == 0) System.out.println(b);
		else if (b == 0) System.out.println(a);
		else System.out.println(gcd(Math.abs(a), Math.abs(b)));
		
		sc.close();
	}
}
