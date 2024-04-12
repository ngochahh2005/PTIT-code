package luyencode2;

import java.util.Scanner;

public class MAGPERM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), k = sc.nextInt();
		if (k == 0) {
			for (int i = 1; i <= n; i++) {
				System.out.print(i + " ");
			}
		} else if ((n/k) % 2 == 0) {
			int d = 1, d1 = 0;
			for (int i = 1; i <= n; i++) {
				if (d1 < k) d1++;
				else {
					d1 = 1;
					d++;
				}
				//System.out.println(i + "\t" + d1 + "\t" + d);
				if (d % 2 != 0) System.out.printf("%d ", i + k);
				else System.out.printf("%d ", i - k);
			}
		} else System.out.println("-1");
		
		sc.close();
	}
}
