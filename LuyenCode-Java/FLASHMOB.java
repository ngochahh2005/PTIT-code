package luyencode3;

import java.util.Scanner;

public class FLASHMOB {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int c = sc.nextInt(), n = sc.nextInt(), a, b;
		int count = 1, k = c;
		int[] dd = new int[34];
		dd[k]++;
		for (int i = 0; i < n; i++) {
			a = sc.nextInt();
			b = sc.nextInt();
			if (b == k) {
				k = a;
			}
			if (dd[k] == 0) {
				count++;
				dd[k]++;
			}
		}
		System.out.println(k + " " + count);
		
		sc.close();
	}
}
