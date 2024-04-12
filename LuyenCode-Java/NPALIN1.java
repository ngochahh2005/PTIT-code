package luyencode2;

import java.util.Scanner;

public class NPALIN1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNextInt()) {
			int n = sc.nextInt();
			int d = (int)Math.ceil((double)n/2) - 1;
			System.out.print("9");
			for (int i = 0; i < d; i++) System.out.print("0");
			System.out.println();
		}
		
		sc.close();
	}
}
