package luyencode;

import java.util.Scanner;

public class VL21 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double n = sc.nextDouble();
		double delta = 1 + 8*n;
		double x = (-1 + Math.sqrt(delta)) / 2;
		System.out.println((int)x);
		
		sc.close();
	}
}
