package luyencode;

import java.util.Scanner;
import java.lang.Math;

public class DK07 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
		if (a == 0) {
			if (b == 0) {
				if (c == 0) System.out.println("WOW");
				else System.out.println("NO");
			} else System.out.printf("%.2f", (float)-c/b);
		} else {
			double delta = b*b - 4*a*c;
			if (delta < 0) System.out.println("NO");
			else if (delta == 0) System.out.printf("%.2f", (double)-b/(2*a));
			else {
				double x1 = (double)(-b+Math.sqrt(delta))/(2*a);
				double x2 = (double)(-b-Math.sqrt(delta))/(2*a);
				if (x1 > x2) {
					double t = x1;
					x1 = x2;
					x2 = t;
				}
				System.out.printf("%.2f %.2f", x1, x2);
			}
		}
		sc.close();
	}
}
