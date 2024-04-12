package luyencode;

import java.util.Scanner;

public class DEMTU {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		int d = 0;
		if (str.charAt(0) != ' ') d++;
		for (int i = 0; i < str.length()-1; i++) {
			if (str.charAt(i) == ' ' && str.charAt(i+1) != ' ') d++;
		}
		System.out.println(d);
		
		sc.close();
	}
}
