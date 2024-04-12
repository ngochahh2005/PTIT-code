package luyencode2;

import java.util.Scanner;

public class HCNV1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int x1 = sc.nextInt(), y1 = sc.nextInt();
		int x2 = sc.nextInt(), y2 = sc.nextInt();
		if (x1 > x2) {
			int t = x1;
			x1 = x2;
			x2 = t;
		}
		if (y1 > y2) {
			int t = y1;
			y1 = y2;
			y2 = t;
		}
		int a = sc.nextInt(), b = sc.nextInt();
		if (a > x1 && b > y1 && a < x2 && b < y2) System.out.println("YES");
		else System.out.println("NO");
				
		sc.close();
	}
}
