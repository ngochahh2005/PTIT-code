package luyencode2;

import java.util.Scanner;

public class UOCLE {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			int ma = 1, can = (int)Math.sqrt((double)n);
			for (int i = 2; i <= can; i++) {
				if (n % i == 0 && (n/i) % 2 != 0) {
					ma = Math.max(ma, n/i);
					break;
				}
				if (n % i == 0 && i % 2 != 0) {
					ma = Math.max(ma, i);
				}
			}
			System.out.println(ma);
		}
		
		sc.close();
	}
}
