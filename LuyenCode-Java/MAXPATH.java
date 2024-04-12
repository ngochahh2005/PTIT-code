package luyencode2;

import java.util.Scanner;

public class MAXPATH {
	public static int max(int a, int b, int c) {
		int d = Math.max(a, b);
		return Math.max(c, d);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt();
		int[][] qhd = new int[m+3][n+3];
		int[][] a = new int[m+3][n+3];
		for (int i = 0; i <= m; i++) {
			qhd[i][0] = 0;
		}
		for (int j = 0; j <= n; j++) {
			qhd[0][j] = 0;
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				a[i][j] = sc.nextInt();
			}
		}
		for (int j = 1; j <= n; j++) {
			for (int i = 1; i <= m; i++) {
				qhd[i][j] = max(qhd[i+1][j-1], qhd[i][j-1], qhd[i-1][j-1]) + a[i][j];
				//System.out.println(qhd[i][j]+" = max("+qhd[i+1][j-1]+", "+qhd[i][j-1]+", "+qhd[i-1][j-1]+") + "+a[i][j]);
			}
		}
		int ma = -100000000;
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				System.out.print(qhd[i][j] + " ");
//			}
//			System.out.println();
//		}
		for (int i = 1; i <= m; i++) {
			ma = Math.max(ma, qhd[i][n]);
		}
		System.out.println(ma);
		
		sc.close();
	}
}
