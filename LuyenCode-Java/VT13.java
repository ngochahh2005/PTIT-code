package luyencode;

import java.util.Scanner;

public class VT13 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), vtd, vtc;
		long a[] = new long[n];
		long ma;
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextLong();
		}
		ma = a[0] + a[n-1];
		vtd = n-1;
		vtc = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] + a[i+1] == ma) {
				if (a[vtd] < a[i]) {
					vtd = i;
					vtc = i+1;
				}
			} else if (a[i] + a[i+1] > ma) {
				ma = a[i] + a[i+1];
				vtd = i;
				vtc = i+1;
			}
		}
		System.out.println(a[vtd] + " " + a[vtc]);
		
		sc.close();
	}
}
