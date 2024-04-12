package luyencode3;

import java.util.Arrays;
import java.util.Scanner;

public class NUMTRANS {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n  = sc.nextInt();
		String[] str = new String[n+5];
		for (int i = 0; i < n; i++) {
			str[i] = sc.next();
		}
		Arrays.sort(str, 0, n);
		for (int i = n-1; i >= 0; i--) {
			System.out.print(str[i]);
		}
		
		sc.close();
	}
}
