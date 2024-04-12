package luyencode;

import java.util.Scanner;

public class VL08 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt(), b = sc.nextInt(), n;
		if (a % 2 != 0) a++;
		if (b % 2 != 0) b--;
		n = (b-a)/2 + 1;
		System.out.println(n*(b+a)/2);
		
		sc.close();
	}
}
