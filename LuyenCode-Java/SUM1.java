package luyencode;

import java.util.Scanner;

public class SUM1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		System.out.println(n*(n+1)/2);
		
		sc.close();
	}
}
