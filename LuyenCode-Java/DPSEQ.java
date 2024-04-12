package luyencode2;

import java.util.Scanner;

public class DPSEQ {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), k = sc.nextInt();
		int[] a = new int[n+2];
		for (int i = 1; i <= n; i++) {
			a[i] = sc.nextInt();
		}
		int left, right;
		int[] dp = new int[n+2];
		for (int i = 1; i <= n; i++) {
			if (i - k < 0) left = 0;
			else left = i-k;
			right = i-1;
			int max = -1000000000;
			for (int j = left; j <= right; j++) {
				max = Math.max(max, dp[j]);
			}
			dp[i] = max + a[i];
		}
		int max = -1000000000;
		for (int i = 1; i <= n; i++) {
			max = Math.max(max, dp[i]);
		}
		System.out.println(max);
		
		sc.close();
	}
}
