package luyencode2;

import java.util.Scanner;

public class MINMAX {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), t;
		int min = 1000000007, max = -1000000007, pMin = 1, pMax = 1;
		for (int i = 1; i <= n; i++) {
			t = sc.nextInt();
			if (t < min) {
				min = t;
				pMin = i;
			}
			if (t > max) {
				max = t;
				pMax = i;
			}
		}
		System.out.println(min + " " + pMin + " " + max + " " + pMax);
		
		sc.close();
	}
}
