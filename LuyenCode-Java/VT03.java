package luyencode;

import java.util.Scanner;

public class VT03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), ma = -1000000000, vt = 0;
		for (int i = 0; i < n; i++)
		{
			int t = sc.nextInt();
			if (ma <= t) {
				ma = t;
				vt = i;
			}
			
		}
		System.out.println(vt);
		
		sc.close();
	}
}
