package luyencode;

import java.util.Scanner;

public class VT06 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		double avg = 0, d = 0;
		for (int i = 0; i < n; i++) {
			double t = sc.nextInt();
			if (t % 2 != 0) {
				avg += t;
				d++;
			}
		}
		avg /= d;
		System.out.printf("%.4f", avg);
		
		sc.close();
	}
}
