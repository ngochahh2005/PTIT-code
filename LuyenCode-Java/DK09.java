package luyencode;

import java.util.Scanner;

public class DK09 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong();
		if (n <= 0 || n > 100000) System.out.println("INVALID");
		else if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
			System.out.println("YES");
		else System.out.println("NO");
		
		sc.close();
	}
}
