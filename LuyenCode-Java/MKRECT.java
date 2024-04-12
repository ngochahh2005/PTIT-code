package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class MKRECT {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		long[] a = new long[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextLong();
		}
		Arrays.sort(a, 0, n);
		long ma1 = 0, ma2 = 0;
		for (int i = n-1; i > 0; i--) {
			if (a[i] > ma1 && a[i] == a[i-1]) {
				ma1 = a[i];
				i -= 2;
			}
			if (ma1 != 0 && a[i] > ma2 && a[i] == a[i-1]) {
				ma2 = a[i];
				break;
			}
		}
		System.out.println(ma1*ma2);
		
		sc.close();
	}
}
