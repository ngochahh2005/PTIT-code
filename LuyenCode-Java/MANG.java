package luyencode3;

import java.util.Scanner;

public class MANG {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int count = 0, max = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			int t = sc.nextInt();
			sum += t;
			if (t % 2 == 0) count++;
			if (t > 0) max = t;
		}
		System.out.println(sum + " " + count + " " + max);
		
		sc.close();
	}
}
