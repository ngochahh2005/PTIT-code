package luyencode3;

import java.util.Scanner;

public class MAGB {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n];
		int[] l = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		l[0] = 0;
		for (int i = 1; i < n; i++) {
			l[i] = l[i-1];
			for (int j = 0; j < i; j++) {
				if (a[j] > a[i]) l[i]++;
			}
		}
		System.out.println(l[n-1]);
		
		sc.close();
	}
}
