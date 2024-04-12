package luyencode2;

import java.util.Scanner;

public class PALIN {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next(), reverse = "";
		int n = str.length();
		for (int i = 0; i < str.length(); i++)
			reverse = str.charAt(i) + reverse;
		str = "0" + str;
		reverse = "0" + reverse;
		int[][] dp = new int[n+5][n+5];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (str.charAt(i) == reverse.charAt(j)) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
				
			}
		}
		System.out.println(dp[n][n]);
		
		sc.close();
	}
}
