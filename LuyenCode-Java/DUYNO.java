package luyencode;

import java.util.Scanner;

public class DUYNO {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str;
		while (sc.hasNext()) {
			str = sc.nextLine();
			if (str.charAt(0) == str.charAt(str.length()-1)) {
				System.out.println("YES");
			} else System.out.println("NO");
		}
		
		sc.close();
	}
}
