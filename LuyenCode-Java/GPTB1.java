package luyencode;

import java.util.Scanner;

public class GPTB1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long a1 = sc.nextLong(), b1 = sc.nextLong(), c1 = sc.nextLong();
		long a2 = sc.nextLong(), b2 = sc.nextLong(), c2 = sc.nextLong();
		long D = a1*b2 - a2*b1;
		long Dx = c1*b2 - c2*b1;
		long Dy = a1*c2 - a2*c1;
		if (D == 0) {
			if (Dx == Dy && Dx == 0) System.out.println("VOSONGHIEM");
			else System.out.println("VONGHIEM");
		} else {
			System.out.printf("%.2f %.2f", (double)Dx/D, (double)Dy/D);
		}
		
		sc.close();
	}
}
