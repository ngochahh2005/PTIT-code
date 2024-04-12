package luyencode2;

import java.util.Scanner;

public class SUM7 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double[] sum = new double[1000004];
		sum[0] = 0;
		for (int i = 1; i <= 1000000; i++) {
			sum[i] = Math.sqrt(i + sum[i-1]);
		}
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			System.out.printf("%.5f\n",sum[n]);
		}
		
		sc.close();
	}
}
