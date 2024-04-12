package luyencode2;

import java.util.Scanner;

public class TAMGIAC {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong();
		if (a + b > c && a + c > b && b + c > a) {
			double p = (double)(a+b+c)/2;
			double s = Math.sqrt(p*(p-a)*(p-b)*(p-c));
			System.out.printf("%d %.2f", a+b+c, s);
		} else System.out.println("NO");
		
		sc.close();
	}
}
