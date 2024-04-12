package luyencode;

import java.util.Scanner;

public class VL12 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		if (n == 0) System.out.println("INF");
		else {
			if (n < 0) n = -n;
			for (int i = n; i >= 1; i--)
			{
				if (n % i == 0) {
					System.out.print(i);
					if (n == 1) break;
					System.out.print(" ");
				}
			}
		}
		
		sc.close();
	}
}
