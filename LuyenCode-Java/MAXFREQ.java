package luyencode2;

import java.util.Scanner;

public class MAXFREQ {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] a = new int[n+5];
		int[] count = new int[100005];
		for (int i = 0; i < n; i++)
		{
			a[i] = sc.nextInt();
			count[a[i]]++;
		}
		int countMax = 1, fMax = a[0]; 
		for (int i = 0; i < n; i++) {
			if (countMax < count[a[i]]) {
				countMax = count[a[i]];
				fMax = a[i];
			}
		}
		System.out.println(fMax + " " + countMax);
			
		sc.close();
	}
}
