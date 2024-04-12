package luyencode;

import java.util.Scanner;

public class VL17 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		a = Math.abs(a);
		int can = (int)Math.sqrt((double)a), d = 2;
		for (int i = 2; i <= can; i++)
		{
			if (a % i == 0) d += 2;
		}
		if (a == can*can) d--;
		if (a == 1 || a == -1) System.out.println("1");
		else System.out.println(d);
		
		sc.close();
	}
}
