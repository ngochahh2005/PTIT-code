package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class DK03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt(), b = sc.nextInt();
			System.out.println(Math.abs(a-b));
		} finally {
			sc.close();
		}
	}
}
