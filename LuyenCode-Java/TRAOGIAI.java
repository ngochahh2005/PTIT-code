package luyencode3;

import java.util.Arrays;
import java.util.Scanner;

public class TRAOGIAI {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		int count = n/2, vt = (int)Math.ceil((double)n/2);
		Arrays.sort(a, 0, n);
		if (vt > 0) while(a[vt] == a[vt-1] && vt > 0) {
			count++;
			vt--;
			if (vt == 0) break;
		}
		System.out.println(count);
		
		sc.close();
	}
}
