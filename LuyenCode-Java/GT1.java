package luyencode;

import java.util.Scanner;

public class GT1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong(), t = 1;
		for (int i = 1; i <= n; i++)
		{
			t *= i;
		}
		System.out.println(t);
		
		sc.close();
	}
}
