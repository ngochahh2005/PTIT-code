package luyencode;

import java.util.Scanner;

public class SPACE {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		String str = sc.nextLine();
		while (t-- > 0) {
			str = sc.nextLine();
			int d = 0;
			if (str.charAt(str.length()-1) == ' ') d++;
			for (int i = 0; i < str.length()-1; i++) {
				if (str.charAt(i) == ' ' && str.charAt(i+1) != ' ') {
					d++;
				}
			}
			System.out.println(d);
			//System.out.println(str);
		}
		
		sc.close();
	}
}
