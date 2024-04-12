package luyencode2;

import java.util.Scanner;

public class MT02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt(), sum = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int t = sc.nextInt();
				if (i % 2 != 0) sum += t;
			}
		}
		System.out.println(sum);
		
		sc.close();
	}
}
