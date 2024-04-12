package luyencode2;

import java.util.Scanner;

public class SUBSUM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long a = sc.nextLong(), b = sc.nextLong();
		long x = (a+b)/2;
		long y = a - x;
		
		System.out.println(x + " " + y);
		
		sc.close();
	}
}
