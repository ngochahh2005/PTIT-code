package luyencode;

import java.util.Arrays;
import java.util.Scanner;

public class VT12 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a, 0, n);
		System.out.println(a[n-1]-a[0]);
		
		sc.close();
	}
}
