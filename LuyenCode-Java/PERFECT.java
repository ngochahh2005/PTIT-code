package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class PERFECT {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] h = new int[n];
		for (int i = 0; i < n; i++) {
			h[i] = sc.nextInt();
		}
		Arrays.sort(h);
		int hmin = 1000000000;
		for (int i = 1; i < n; i++) {
			hmin = Math.min(hmin, h[i] - h[i-1]);
		}
		System.out.println(hmin);
		
		sc.close();
	}
}
