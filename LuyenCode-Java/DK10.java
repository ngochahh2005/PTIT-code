package luyencode;

import java.util.Scanner;

public class DK10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), y = sc.nextInt();
		if (y <= 0 || m < 1 || m > 12) System.out.println("INVALID");
		else if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
			System.out.println("29");
		else if (m == 2) System.out.println("28");
		else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			System.out.println("31");
		else System.out.println("30");
		
		sc.close();
	}
}
