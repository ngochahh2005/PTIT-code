package luyencode;

import java.util.Scanner;

public class CB08 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			long a = sc.nextLong(), b = sc.nextLong();
			long c = a + b;
			System.out.print(a + " + "+ b + " = " + c);
		} finally {
			sc.close();
		}
	}
}
