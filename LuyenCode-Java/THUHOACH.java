package luyencode2;

import java.util.Scanner;

public class THUHOACH {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), c = sc.nextInt();
		int[] w = new int[n+3];
		for (int i = 1; i <= n; i++) {
			w[i] = sc.nextInt();
		}
		int[][] dp = new int[n+3][c+3];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= c; j++) {
				dp[i][j] = dp[i-1][j];
				if (w[i] <= j) dp[i][j] = Math.max(dp[i][j], dp[i-1][j-w[i]] + w[i]);
			}
		}
		System.out.println(dp[n][c]);
		
		sc.close();
	}
}
