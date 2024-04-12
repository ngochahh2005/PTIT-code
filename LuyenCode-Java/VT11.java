package luyencode;

import java.util.Arrays;
import java.util.Scanner;

public class VT11 {	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n + 5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a, 1, n - 1);
		for (int i = 0; i < n; i++) {
			System.out.print(a[i] + " ");
		}
		
		sc.close();
	}
}
