package luyencode3;

import java.util.Scanner;

public class PROJECT {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), S = sc.nextInt();
		int[][] dp = new int[n+3][S+3];
		int[] c = new int[n+3];
		int[] p = new int[n+3];
		for (int i = 1; i <= n; i++) c[i] = sc.nextInt();
		for (int i = 1; i <= n; i++) p[i] = sc.nextInt();
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= S; j++) {
				dp[i][j] = dp[i-1][j];
				if (c[i] <= j) {
					dp[i][j] = Math.max(dp[i][j], dp[i-1][j-c[i]] + p[i]);
				}
			}
		}
		System.out.println(dp[n][S]);
		
		sc.close();
	}
}
