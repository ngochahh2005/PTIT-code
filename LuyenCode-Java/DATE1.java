package luyencode2;

import java.util.Scanner;

public class DATE1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), y = sc.nextInt();
		int m = 1;
		if (n > 31) {
			n -= 31;
			m = 2;
		}
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
			if (n > 29) {
				n -= 29;
				m = 3;
			}
		} else if (n > 28) {
			n -= 28;
			m = 3;
		}
		for (int i = 3; i <= 7; i++) {
			if (i % 2 != 0) {
				if (n > 31) {
					n -= 31;
					m = i+1;
				}
			} else if (n > 30) {
				n -= 30;
				m = i+1;
			}
		}
		for (int i = 8; i <= 12; i++) {
			if (i % 2 == 0) {
				if (n > 31) {
					n -= 31;
					m = i+1;
				}
			} else if (n > 30) {
				n -= 30;
				m = i+1;
			}
		}
		System.out.println(n + " " + m);
		
		sc.close();
	}
}
