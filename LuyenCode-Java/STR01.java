package luyencode2;

import java.util.Scanner;

public class STR01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		str = str.toLowerCase();
		System.out.println(str);
		
		sc.close();
	}
}
