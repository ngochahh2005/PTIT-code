package luyencode;

import java.util.Scanner;

public class VT07 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] a = new int[10];
		for (int i = 0; i < 10; i++)
		{
			a[i] = sc.nextInt();
		}
		int x = sc.nextInt();
		boolean kt = false;
		for (int i = 0; i < 10; i++) {
			if (x == a[i]) {
				kt = true;
				System.out.printf("%d ", i+1);
			}
		}
		if (kt == false) System.out.println("-1");
		
		sc.close();
	}
}
