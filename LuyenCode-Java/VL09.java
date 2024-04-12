package luyencode;

import java.util.Scanner;

public class VL09 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double x = sc.nextDouble(), s = 0, t = 1;
		int n = sc.nextInt(), gt = 1;
		for (int i = 1; i <= n; i++)
		{
			gt *= i;
			t *= x;
			s += t/gt;
		}
		System.out.printf("%.2f", s);
		
		sc.close();
	}
}
