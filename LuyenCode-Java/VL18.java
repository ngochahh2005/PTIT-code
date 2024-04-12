package luyencode;

import java.util.Scanner;

public class VL18 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String s = sc.next(), rv = "";
		for (int i = s.length()-1; i >= 0 ; i--)
		{
			if (s.charAt(i) == '0' && rv.equals("")) continue; 
			rv += s.charAt(i);
		}
		System.out.println(rv);
		
		sc.close();
	}
}
