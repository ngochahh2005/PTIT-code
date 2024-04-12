package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class MT04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt(), row = sc.nextInt();
		int[][] a = new int[m+3][n+3];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = sc.nextInt();
			}
		}
		Arrays.sort(a[row-1], 0, n);

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}
}