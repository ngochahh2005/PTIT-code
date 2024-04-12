package luyencode3;

import java.util.Scanner;

public class TUONGDAI {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), k = sc.nextInt();
		long[] sum = new long[n+3];
		for (int i = 1; i <= n; i++) {
			int t = sc.nextInt();
			sum[i] = sum[i-1] + t;
		}
		int u, v;
		for (int i = 0; i < k; i++) {
			u = sc.nextInt();
			v = sc.nextInt();
			long s = sum[v] - sum[u-1];
			System.out.print(s + " ");
		}
		
		sc.close();
	}
}
