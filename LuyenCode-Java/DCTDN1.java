package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class DCTDN1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		int[] L = new int[n+5];
		Arrays.fill(L, 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j]) {
					L[i] = Math.max(L[i], L[j] + 1);
				}
			}
		}
		Arrays.sort(L, 0, n);
		System.out.println(L[n-1]);
		
		sc.close();
	}
}
