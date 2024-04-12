package luyencode2;

import java.util.Scanner;

public class MT01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt();
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int t = sc.nextInt();
				System.out.print(t + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}
}
