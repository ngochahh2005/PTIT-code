package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class SCBN2 {
	public static long toHop(long x) {
		return x*(x-1)/2;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		long s = 0, d = 1;
		Arrays.sort(a, 0, n);
		for (int i = 0; i < n-1; i++) {
			if (a[i] == a[i+1]) {
				d++;
			} else {
				if (d > 1) s += toHop(d);
				d = 1;
			}
			if (i == n - 2 && d != 1) {
				s += toHop(d);
			}
		}
		System.out.println(s);
		
		sc.close();
	}
}
