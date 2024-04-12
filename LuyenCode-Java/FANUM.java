package luyencode3;

import java.util.Arrays;
import java.util.Scanner;

public class FANUM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+1];
		for (int i = 1; i <= n; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a, 1, n+1);
		int count = 0, d = 1;
		for (int i = n; i > 0; i--) {
			if (a[i] == a[i-1]) {
//				int vt = i-1;
				d++;
//				System.out.println(a[i] + " " + a[vt] + " " + d);
			} else {
				if (d > 1) count += d;
//				System.out.println(count);
				d = 1;
			}
		}
		count = n - count;
		System.out.println(count);
		
		sc.close();
	}
}
