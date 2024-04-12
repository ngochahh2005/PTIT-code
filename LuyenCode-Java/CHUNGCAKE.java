package luyencode2;

import java.util.Scanner;

public class CHUNGCAKE {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), V = sc.nextInt();
		int[] v = new int[n+3];
		int[][] dp = new int[n+3][V+3];
		for (int i = 1; i <= n; i++) {
			v[i] = sc.nextInt();
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= V; j++) {
				dp[i][j] = dp[i-1][j];
				if (v[i] <= j) {
					dp[i][j] = Math.max(dp[i][j], dp[i-1][j-v[i]] + v[i]);
				}
			}
		}
		System.out.println(dp[n][V]);
		
		sc.close();
	}
}
