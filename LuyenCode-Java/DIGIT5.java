package luyencode3;

import java.util.Scanner;

public class DIGIT5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt(), count = 0;
		for (int i = m; i <= n; i++) {
			count += countDigit5(i);
		}
		System.out.println(count);
		
		sc.close();
	}
	
	public static int countDigit5(int n) {
		int count = 0, digit;
		while (n > 0) {
			digit = n % 10;
			if (digit == 5) count++;
			n /= 10;
		}
		return count;
	}
}
