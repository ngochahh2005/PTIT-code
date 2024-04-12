package luyencode;

import java.util.Scanner;

public class VT01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), ma = -1000000000;
		for (int i = 0; i < n; i++)
		{
			int t = sc.nextInt();
			ma = Math.max(ma, t);
		}
		System.out.println(ma);
		
		sc.close();
	}
}
