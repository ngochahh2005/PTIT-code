package luyencode2;

import java.util.Scanner;

public class SIMMATH {
	public static long pow(long a, long b) {
		final long mod = 998244353;
		if (b == 0) return 1;
		long t = pow(a, b/2) % mod;
		if (b % 2 == 0) return (t * t) % mod;
		else return (a * (t * t) % mod) % mod;
	}
	public static long sum(long x) {
		final long mod = 998244353;
		long tu = ((x % mod) * ((x+1) % mod)) % mod;
		long mau = (pow(2, mod - 2));
		return ((tu % mod) * (mau % mod)) % mod;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		final long mod = 998244353;
		long t = sc.nextInt();
		while (t-- > 0) {
			long a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
			long s = ((((sum(a) % mod) * (sum(b) % mod)) % mod) * (sum(c) % mod)) % mod;
			System.out.println(s);
		}
		
		
		sc.close();
	}
}
