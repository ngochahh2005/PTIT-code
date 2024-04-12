package luyencode;

import java.util.Scanner;

public class DT1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int r = sc.nextInt();
		System.out.printf("%.3f", (double)Math.PI*r*r/2);
		
		sc.close();
	}
}
