package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class TNV {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a, 0, n);
		int d = 1, ma = 1, maVal = a[0];
		for (int i = 0; i < n - 1; i++) {
			if (a[i] == a[i+1]) {
				d++;
			} else {
				if (d >= ma) {
					ma = d;
					maVal = a[i];
				}
				d = 1;
			}
		}
		if (d >= ma) {
			ma = d;
			maVal = a[n-1];
		}
		System.out.println(maVal + " " + ma);
		
		sc.close();
	}
}
