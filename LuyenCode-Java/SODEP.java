package luyencode2;

import java.util.Scanner;

public class SODEP {
	public static boolean checkPalin (int x) {
		boolean check = true;
		String str = Integer.toString(x);
		int left = 0, right = str.length() - 1;
		while (left <= right) {
			if (str.charAt(left) != str.charAt(right)) {
				check = false;
				break;
			} else {
				left++;
				right--;
			}
		}
		int s = 0;
		for (int i = 0; i < str.length(); i++) {
			s += Character.getNumericValue(str.charAt(i));
		}
		if (s % 10 != 0) check = false;
		return check;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
			int l = sc.nextInt(), r = sc.nextInt(), d = 0;
			for (int i = l; i <= r; i++) {
				if (checkPalin(i)) d++;
			}
			System.out.println(d);
		}
		
		sc.close();
	}
}
