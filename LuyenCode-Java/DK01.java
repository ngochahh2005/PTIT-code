package luyencode;

import java.util.Scanner;

public class DK01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt(), b = sc.nextInt();
			if (a > b) {
				System.out.println(a);
			} else {
				System.out.println(b);
			}
		} finally {
			sc.close();
		}
	}
}
