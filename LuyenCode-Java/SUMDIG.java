package luyencode;

import java.util.Scanner;

public class SUMDIG {
	
	public static int sumOfDigits (long n) {
		int s = 0;
		while (n > 0) {
			s += n % 10;
			n /= 10;
		}
		return s;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			long n = sc.nextLong();
			System.out.println(sumOfDigits(n));
		}
		
		sc.close();
	}
}
