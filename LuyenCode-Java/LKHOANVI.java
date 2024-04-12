package luyencode2;

import java.util.Scanner;

public class LKHOANVI {
	static int[] a = new int[20];
	static boolean[] marker = new boolean[20];
	static int n;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		n = sc.nextInt();
		backTrack(1);
		
		sc.close();
	}
	public static void xuat() {
		for (int i = 1; i <= n; i++) {
			System.out.print(a[i]);
			if (i == 10) continue;
			System.out.print(" ");
		}
		System.out.println();
	}
	public static void backTrack(int pos) {
		if (pos > n) xuat();
		else {
			for (int i = 1; i <= n; i++) {
				if (marker[i] == true) continue;
				marker[i] = true;
				a[pos] = i;
				backTrack(pos + 1);
				marker[i] = false;
			}
		}
	}
}
