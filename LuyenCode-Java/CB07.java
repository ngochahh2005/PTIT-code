package luyencode;

import java.util.Scanner;

public class CB07 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			Float r = sc.nextFloat();
			System.out.printf("%.3f %.3f", 3.14*r*2, 3.14*r*r);
			//System.out.format("%.3lf %.3lf"+ 3.14*r*2+ 3.14*r*r);
		} finally {
			sc.close();
		}
	}
}
