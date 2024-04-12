package luyencode;

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

public class SUM4 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			long n = sc.nextLong();
			BigDecimal a = new BigDecimal((double)2*n);
			BigDecimal b = new BigDecimal((double)n+1);
			BigDecimal sum = a.divide(b, 8, RoundingMode.HALF_UP);
			System.out.println(sum);
		}
		
		sc.close();		
	}
}
