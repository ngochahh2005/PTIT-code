package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class VL13 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), s = 1;
		if (n <= 1) System.out.println("NO");
		else {
			int can = (int)Math.sqrt((double)n);
			for (int i = 2; i <= can; i++)
			{
				if (n % i == 0) {
					if (i == can && can * can == n) s += can;
					else s += i + (n/i);
				}
			}
			if (s == n) System.out.println("YES");
			else System.out.println("NO");
		}
		
		
		sc.close();
	}
}
