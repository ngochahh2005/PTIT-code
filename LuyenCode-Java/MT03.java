package luyencode2;

import java.util.Scanner;

public class MT03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int t = sc.nextInt();
				if (i == j) sum += t;
			}
		}
		System.out.println(sum);
		
		sc.close();
	}
}
