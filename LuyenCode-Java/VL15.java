package luyencode;

import java.util.Scanner;

public class VL15 {
	public static int gcd(int a, int b) {
		if (a < b) {
			int t = a;
			a = b;
			b = t;
		}
		if (b == 0) return a;
		return gcd(b, a % b);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt();
		if (b == 0) System.out.println("INVALID");
		else if (a == 0) System.out.println("0");
		else {
			if (a < 0 && b < 0) {
				a = Math.abs(a);
				b = Math.abs(b);
				if (gcd(a, b) == b) System.out.println(a/b);
				else System.out.println(a/gcd(a,b) + " " + b/gcd(a,b));
			} else {
				if (b < 0) {
					a = -a;
					b = -b;
				}
				if (gcd(Math.abs(a), b) == b) System.out.println(a/b);
				else System.out.println(a/gcd(Math.abs(a),b) + " " + b/gcd(Math.abs(a),b));
			}
		}
		
		sc.close();
	}
}
