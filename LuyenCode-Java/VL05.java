package luyencode;

import java.util.Scanner;

public class VL05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong(), s = 0;
		for (int i = 1; i <= 3*n+1; i++)
		{
			if (i % 2 == 0) s -= i;
			else s += i;
		}
		System.out.println(s);
		
		sc.close();
	}
}
