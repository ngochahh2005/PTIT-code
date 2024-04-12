package luyencode2;

import java.util.Scanner;

public class SUBSTR {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String a = sc.next(), b = sc.next();
		a = "0" + a;
		b = "0" + b;
		int[][] L = new int[2001][2001];
		for (int i = 1; i < a.length(); i++) {
			for (int j = 1; j < b.length(); j++) {
				if (a.charAt(i) == b.charAt(j)) L[i][j] = L[i-1][j-1] + 1;
				else {
					L[i][j] = Math.max(L[i-1][j], L[i][j-1]);
				}
			}
		}
		System.out.println(L[a.length()-1][b.length()-1]);
		
		sc.close();
	}
}
