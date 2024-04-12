package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class DK05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			long n = sc.nextLong();
			if (n < 0) System.out.println("NO");
			else {
				long  x = (long)Math.sqrt((double)n);
				if (x * x == n) {
					System.out.println("YES");
				} else System.out.println("NO");
			}
		} finally {
			sc.close();
		}
	}
}
