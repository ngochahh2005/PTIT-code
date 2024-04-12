package luyencode;

import java.util.Scanner;

public class VL07 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong(), k = sc.nextLong(), c = 1, t = 1;
		for (long i = n; i >= n-k+1; i--)
		{
			c *= i;
		}
		for (int i = 1; i <= k; i++)
		{
			t *= i;
		}
		System.out.println(c/t);
		
		sc.close();
	}
}
