package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class MK119SNT {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		final int ma = 1000000;
		boolean sang[] = new boolean[ma + 5];
		Arrays.fill(sang, true);
		sang[0] = false;
		sang[1] = false;
		int[] count = new int[ma + 5];
		for (int i = 2; i <= 1000; i++) {
			if (sang[i] == false) continue;
			for (int j = 2*i; j <= ma; j += i) {
				sang[j] = false;
			}
		}
		for (int i = 2; i <= ma; i++) 
			if (sang[i]) count[i] = count[i-1]+1;
			else count[i] = count[i-1];
		
		
		int t = sc.nextInt();
		while (t-- > 0) {
			int l = sc.nextInt(), r = sc.nextInt();
			System.out.println(count[r] - count[l-1]);
		}
		
		sc.close();
	}
}
