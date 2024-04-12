package luyencode3;

import java.util.Scanner;

public class DANCING {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long h = sc.nextInt();
		long xanh = (h-1)+(h-2)+(2*h-1);
		long dor = (h-2)*(h-2);
		System.out.println(xanh + " " + dor);
		
		sc.close();
	}
}
