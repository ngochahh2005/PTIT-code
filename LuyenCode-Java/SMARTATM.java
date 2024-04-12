package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class SMARTATM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), m = sc.nextInt();
		int[] dp = new int[m+5];
		int[] a = new int[n+5];
		for (int i = 1; i <= n; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.fill(dp, -1);
		dp[0] = 0;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (i < a[j]) break;
//				System.out.println(i + "\t" + a[j]);
				if (dp[i - a[j]] != -1) {
					if (dp[i] == -1) dp[i] = dp[i-a[j]] + 1;
					else dp[i] = Math.min(dp[i-a[j]] + 1, dp[i]);
				}
			}
		}
//		for (int i = 1; i <= m; i++) System.out.println(i+"\t"+dp[i]);
		System.out.println(dp[m]);
		
		sc.close();
	}
}
