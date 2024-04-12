package luyencode;

import java.util.Scanner;

public class VL16 {
	public static int gcd(int a, int b) {
		if (a < b) {
			int t = a;
			a = b;
			b = t;
		}
		if (b == 0) return a;
		return gcd(b, a%b);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt();
		a = Math.abs(a);
		b = Math.abs(b);
		System.out.println(a*b/gcd(a,b));
		
		sc.close();
	}
}