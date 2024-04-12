package luyencode3;

import java.util.Scanner;

public class PASSW {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		while (n-- > 0) {
			String str = sc.next();
			int s = Math.min(5, Math.max(str.length()-5, 0)), count = 0;
			boolean thuong = false, hoa = false, so = false;
			for (int i = 0; i < str.length(); i++) {
				char ch = str.charAt(i);
				if (Character.isDigit(ch) == true && so == false) {
					so = true;
					count++;
				}
				if (Character.isUpperCase(ch) == true && hoa == false) {
					hoa = true;
					count++;
				}
				if (Character.isLowerCase(ch) == true && thuong == false) {
					thuong = true;
					count++;
				}
				if (count == 3) break;
			}
			if (count == 1) s += 1;
			if (count == 2) s += 2;
			if (count == 3) s += 5;
			System.out.print(s + " ");
		}
		
		sc.close();
	}
}
