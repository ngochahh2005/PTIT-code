package luyencode2;

import java.util.Scanner;

public class SUM8 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			double s = 0;
			for (int i = n; i > 0; i--) {
				s = Math.sqrt(i + s);
			}
			System.out.printf("%.5f\n", s);
		}
		
		sc.close();
	}
}
