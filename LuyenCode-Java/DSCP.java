package luyencode2;

import java.util.Scanner;

public class DSCP {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long l = sc.nextLong(), r = sc.nextLong();
		System.out.println((long)Math.sqrt((double)r) - (long)Math.ceil(Math.sqrt((double)l)) + 1);
		
		sc.close();
	}
}
