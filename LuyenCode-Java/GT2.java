package luyencode2;

import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class GT2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		BigInteger[] fac = new BigInteger[1005];
		Arrays.fill(fac, BigInteger.ONE);
		for (int i = 2; i <= 1000; i++) {
			fac[i] = fac[i-1].multiply(BigInteger.valueOf(i));
		}
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			System.out.println(fac[n]);
		}
		
		sc.close();
	}
}
