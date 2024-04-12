package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class SANGNT {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		boolean[] sang = new boolean[1000005];
		int can = (int)Math.sqrt(1000005);
		Arrays.fill(sang, 0, 1000005, true);
		sang[0] = false;
		sang[1] = false;
		for (int i = 2; i <= can; i++) {
			if (sang[i] == false) continue;
			for (int j = 2*i; j < 1000005; j += i) {
				sang[j] = false;
			}
		}
		int n = sc.nextInt();
		for (int i = 2; i <= n; i++) {
			if (sang[i] == true) System.out.print(i + " ");
		}
		
		sc.close();
	}
}
