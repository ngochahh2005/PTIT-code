package luyencode;

import java.util.Scanner;

public class SUM3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextInt();
		double s = 0;
		for (long i = 1; i <= n; i++) {
			s += (double)1/(i*(i+1));
		}
		System.out.printf("%.5f", s);
		
		sc.close();
	}
}
