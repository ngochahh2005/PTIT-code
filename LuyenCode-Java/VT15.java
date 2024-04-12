package luyencode;

import java.util.Arrays;
import java.util.Scanner;

public class VT15 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		long[] a = new long[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextLong();
		}
		Arrays.sort(a, 0, n);
		long ma = a[0]*a[1]*a[n-1] > a[n-1]*a[n-2]*a[n-3] ? a[0]*a[1]*a[n-1] : a[n-1]*a[n-2]*a[n-3];
		System.out.println(ma);
		
		sc.close();
	}
}
