package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class VL11 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong();
		if (n < 2) System.out.println("NO");
		else {
			int can = (int)Math.sqrt((double)n);
			if (can * can == n) System.out.println("NO");
			else {
				boolean kt = true;
				for (int i = 2; i <= can; i++)
				{
					if (n % i == 0) {
						kt = false;
						break;
					}
				}
				if (kt == false) System.out.println("NO");
				else System.out.println("YES");
			}
		}
		
		sc.close();
	}
}
