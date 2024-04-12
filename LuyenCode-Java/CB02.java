package luyencode;

import java.util.Scanner;

public class CB02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt(), b = sc.nextInt();
			System.out.println(a + b);
		} finally {
			sc.close();
		}
		
	}
}
