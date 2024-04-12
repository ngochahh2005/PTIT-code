package luyencode2;

import java.math.BigInteger;
import java.util.Scanner;

public class FIBO1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		BigInteger[] fibo = new BigInteger[10005];
		fibo[0] = BigInteger.valueOf(1);
		fibo[1] = BigInteger.valueOf(1);
		for (int i = 2; i <= 10000; i++) {
			fibo[i] = fibo[i-1].add(fibo[i-2]);
		}
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			System.out.println(fibo[n]);
		}
		
		sc.close();
	}
}
