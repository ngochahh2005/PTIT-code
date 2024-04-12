package luyencode3;

import java.util.Arrays;
import java.util.Scanner;

public class GHEPTG {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] a = new int[3];
		for (int i = 0; i < 3; i++) {
			a[i] = sc.nextInt();
		}
		Arrays.sort(a, 0, 3);
		int time = a[2] - (a[0] + a[1] - 1);
		if (time < 0) System.out.println(0);
		else System.out.println(time);
		
		sc.close();
	}
}
