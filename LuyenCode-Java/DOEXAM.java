package luyencode3;

import java.util.Scanner;

public class DOEXAM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), k = sc.nextInt();
		int[] a = new int[n+5];
		int[] dp = new int[n+5];
		int[] l = new int[n+5];
		for (int i = 1; i <= n; i++) {
			a[i] = sc.nextInt();
		}
		dp[1] = a[1];
		l[1] = 1;
		for (int i = 2; i <= n; i++) { 
			if (a[i-1] > a[i-2]) {
				dp[i] = dp[i-1] + a[i];
				l[i] = l[i-1] + 1;
			} else {
				dp[i] = dp[i-2] + a[i];
				l[i] = l[i-2] + 1;
			}
			if (l[i-1] >= k) {
				dp[i] = dp[i-1];
				l[i] = l[i-1];
			}
		}
		int ma = dp[n];
		dp[1] = 0;
		l[1] = 0;
		dp[2] = a[2];
		l[2] = 1;
		for (int i = 3; i <= n; i++) {
			if (a[i-1] > a[i-2]) {
				dp[i] = dp[i-1] + a[i];
				l[i] = l[i-1] + 1;
			} else {
				dp[i] = dp[i-2] + a[i];
				l[i] = l[i-2] + 1;
			}
			if (l[i] > k) {
				dp[i] = dp[i-1];
				l[i] = l[i-1];
			}
		}
		ma = Math.max(ma, dp[n]);
//		for (int i = 1; i <= n; i++) {
//			System.out.print(dp[i] + "\t");
//		}
//		System.out.println();
//		for (int i = 1; i <= n; i++) {
//			System.out.print(l[i] + "\t");
//		}
		System.out.println(ma);
		
		sc.close();
	}
}
