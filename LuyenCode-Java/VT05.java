package luyencode;

import java.util.Scanner;

public class VT05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), x = sc.nextInt(), d = 0;
		for (int i = 0; i < n; i++) {
			int t = sc.nextInt();
			if (t == x) d++;
		}
		System.out.println(d);
		
		sc.close();
	}
}
