package luyencode;

import java.util.Scanner;

public class VT02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), ma = -1000000009;
		int[] a = new int[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = sc.nextInt();
			ma = Math.max(ma, a[i]);
		}
		int ma2 = -1000000009;
		for (int i = 0; i < n; i++) {
			if (ma2 < a[i] && a[i] < ma) ma2 = a[i];
		}
		if (ma2 == -1000000009)System.out.println("NOT FOUND");
		else System.out.println(ma2);
		
		sc.close();
	}
}
