package luyencode;

import java.util.Scanner;

public class VL04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		double s = 0;
		for (int i = 2; i <= n; i++)
		{
			s += (double)1/i;
		}
		System.out.printf("%.4f", s);
		
		sc.close();
	}
}
