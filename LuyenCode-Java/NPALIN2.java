package luyencode2;

import java.util.Scanner;

public class NPALIN2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
//		for (int i = 1; i <= 100; i++) if (checkPalin(i)) System.out.print(i + " ");
		while (sc.hasNext()) {
			long l = sc.nextLong(), r = sc.nextLong(), i;
			int d = 0;
			for (i = l; i <= r; i++) {
				if (checkPalin(i)) d++;
			}
			System.out.println(d);
//			System.out.println(l + " " + r);
		}
		
		sc.close();
	}
	public static boolean checkPalin(long n) {
		boolean check = true;
		String str = Long.toString(n);
		int left = 0, right = str.length()-1;
		while (left <= right) {
			if (str.charAt(left) != str.charAt(right)) {
				check = false;
				break;
			}
			else {
				left ++;
				right --;
			}
		}
		return check;
	}
}