package luyencode;

import java.util.Scanner;

public class VT08 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		if ((n-1) % 2 != 0) {
			a[n - 1] += a[n - 2];
		}
		for (int i = 1; i < n-1; i += 2) {
			a[i] += Math.abs(a[i-1] - a[i+1]);
		}
		for (int i = 0; i < n; i++) System.out.print(a[i] + " ");
		
		sc.close();
	}
}
