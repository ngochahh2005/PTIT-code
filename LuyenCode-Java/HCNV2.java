package luyencode2;

import java.util.Scanner;

public class HCNV2 {
	public static void swap(int[] a, int i, int j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	public static void swapMang(int[] a, int[] b) {
		for (int i = 1; i < 3; i++) {
			int temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] xA = new int[3];
		int[] yA = new int[3];
		int[] xB = new int[3];
		int[] yB = new int[3];
		for (int i = 1; i < 3; i++) {
			xA[i] = sc.nextInt();
			yA[i] = sc.nextInt();
		}
		for (int i = 1; i < 3; i++) {
			xB[i] = sc.nextInt();
			yB[i] = sc.nextInt();
		}
		int x = 0, y = 0;
		if (xA[1] > xA[2]) swap(xA, 1, 2);
		if (xB[1] > xB[2]) swap(xB, 1, 2);
		if (xA[1] > xB[1]) swapMang(xA, xB);
		
		if (xA[2] > xB[1]) {
			x = Math.min(xA[2], xB[2]) - xB[1];
		}
		
		if (yA[1] > yA[2]) swap(yA, 1, 2);
		if (yB[1] > yB[2]) swap(yB, 1, 2);
		
		if (yA[1] > yB[1]) swapMang(yA, yB);
		if (yA[2] > yB[1]) {
			y = Math.min(yA[2], yB[2]) - yB[1];
		}
		System.out.println((long)x*y);
		
		sc.close();
	}
}
