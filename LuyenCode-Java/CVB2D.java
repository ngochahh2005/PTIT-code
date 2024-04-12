package luyencode2;

import java.util.Scanner;

public class CVB2D {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while (t-- > 0) {
			String str = sc.next();
			long s = 0;
			for (int i = 0, mu = str.length()-1; i < str.length(); i++, mu--) {
				s += Character.getNumericValue(str.charAt(i))*(long)Math.pow(2.0, (double)mu);
			}
			System.out.println(s);
		}
		
		sc.close();
	}
}
