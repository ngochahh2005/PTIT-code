package luyencode2;

import java.util.Scanner;

public class POWER1 {
	public static long power(long a, long b) {
		final long mod = 1000000007;
		if (b == 0) return 1;
		long t = power(a, b/2) % mod;
		if (b % 2 == 0) return (t * t) % mod;
		return (a * ((t * t) % mod)) % mod;
	}
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		long a = sc.nextLong(), n = sc.nextLong();
		System.out.println(power(a, n));
		
		sc.close();
	}
}
