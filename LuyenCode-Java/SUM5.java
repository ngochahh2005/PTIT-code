package luyencode2;

import java.util.Scanner;

public class SUM5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double[] s = new double[1000005];
		s[0] = 0;
		for (int i = 1; i <= 1000000; i++) {
			s[i] = s[i-1] + (double)1/i;
		}
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			System.out.printf("%.5f\n",s[n]);
		}
		
		sc.close();
	}
}
