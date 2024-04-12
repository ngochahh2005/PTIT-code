package luyencode;

import java.util.Scanner;

public class DK08 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double a = sc.nextDouble();
		String s = sc.next();
		double b = sc.nextDouble();
		if (s.equals("+")) System.out.printf("%.2f", a+b);
		else if (s.equals("-")) System.out.printf("%.2f", a-b);
		else if (s.equals("*")) System.out.printf("%.2f", a*b);
		else if (b == 0) System.out.println("Math Error");
		else System.out.printf("%.2f", a/b);
		
		sc.close();
	}
}
