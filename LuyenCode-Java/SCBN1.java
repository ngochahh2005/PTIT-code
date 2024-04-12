package luyencode2;

import java.util.Scanner;

public class SCBN1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		int d = 0;
		for (int i = 0; i < n-1; i++) {
			if (a[i] == a[i+1]) d++;
		}
		System.out.println(d);
		
		sc.close();
	}
}
