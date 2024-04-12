package luyencode2;

import java.util.Scanner;

public class SUM9 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			double sum = (double)1/2;
			if (n >= 2) for (int i = 2; i <= n; i++) {
				sum = (double)1/(1+sum);
			}
			System.out.printf("%.5f\n", sum);
		}
		
		sc.close();
	}
}
