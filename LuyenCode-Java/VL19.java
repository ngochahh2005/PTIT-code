package luyencode;

import java.util.Scanner;

public class VL19 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt();
		if (a % 3 == 0) a += 3;
		else {
			if (a > 0) a += 3 - a % 3;
			else a -= a % 3;
		}
		if (b % 3 == 0) b -= 3;
		else {
			if (b > 0) b -= b % 3;
			else b -= (3 + b % 3);
		}
		//System.out.println(a + "\t" + b);
		if (a > b) System.out.println("NOT FOUND");
		else for (int i = b; i >= a; i -= 3) {
			System.out.print(i);
			if (i == a) break;
			System.out.print(" ");
		}
		
		sc.close();
	}
}
