package luyencode3;

import java.util.Arrays;
import java.util.Scanner;

public class FRIENUM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		int[] dem = new int[1000005];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
			dem[a[i]]++;
		}
		Arrays.sort(a, 0, n);
		int count = 0;
		for (int i = 0; i < n-1; i++) {
			if (a[i] != a[i+1] && dem[a[i]] > 1) count += dem[a[i]]; 
			if (i == n - 2 && a[i] == a[i+1]) count += dem[a[i]];
		}
		System.out.println(count);
		
		sc.close();
	}
}
