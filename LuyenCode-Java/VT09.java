package luyencode;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class VT09 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		boolean[] sang = new boolean[1010];
		Arrays.fill(sang, true);
		sang[0] = false;
		sang[1] = false;
		for (int i = 2; i <= 10; i++) {
			if (sang[i] == false) continue;
			for (int j = 2*i; j <= 1000; j += i) {
				sang[j] = false;
			}
		}
		int n = sc.nextInt();
		int[] dd = new int[1010];
		Vector<Integer> vec = new Vector<Integer>();
		for (int i = 0; i < n; i++) {
			int t = sc.nextInt();
			if (t < 0) continue;
			if (sang[t] == true && dd[t] == 0) {
				vec.add(t);
				dd[t]++;
			}
		}
		Collections.sort(vec);
		for (int i = 0; i < vec.size(); i++) {
			System.out.print(vec.elementAt(i) + " ");
		}
		
		sc.close();
	}
}
