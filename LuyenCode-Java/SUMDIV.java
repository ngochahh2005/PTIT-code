package luyencode;

import java.util.Scanner;

public class SUMDIV {
	
	public static int sumOfDivisors(int x) {
		int can = (int)Math.sqrt((double)x);
		int s = 1 + x;
		for (int i = 2; i <= can; i++) {
			if (x % i == 0) s += i + x/i;
		}
		if (can * can == x) s -= can;
		return s;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			System.out.println(sumOfDivisors(n));
		}
		
		sc.close();
	}
}
