package luyencode;

import java.util.Scanner;

public class VL01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt();
		for (int i = a; i <= b; i++)
		{
			System.out.print(i);
			if (i == b) break;
			System.out.print(" ");
		}
		
		sc.close();
	}
}
