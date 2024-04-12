package luyencode;

import java.util.Scanner;

public class DK02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
			if (a >= b && a >= c) {
				System.out.println(a);
			} else if (b >= a && b >= c) {
				System.out.println(b);
			} else System.out.println(c);
		} finally {
			sc.close();
		}
	}
}
