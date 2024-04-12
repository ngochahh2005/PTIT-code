package luyencode;

import java.util.Scanner;

public class CB03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
			int s = a + b + c;
			System.out.println(s);
		} finally {
	        sc.close();
	    }
	}
}
