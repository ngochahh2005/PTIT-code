package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class DK04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			double x = sc.nextDouble();
			x *= 10;
			if (Math.abs((int)x) % 10 >= 5) {
				x /= 10;
				if (x > 0) x = (int)x + 1;
				else x = (int)x - 1;
				System.out.println((int)x);
			} else {
				x /= 10;
				System.out.println((int)x);
			}
		} finally {
			sc.close();
		}
	}
}
