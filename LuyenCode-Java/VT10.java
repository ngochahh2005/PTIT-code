package luyencode;

import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class VT10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		Vector<Integer> vec = new Vector<Integer>();
		for (int i = 0; i < n; i++) {
			int t = sc.nextInt();
			vec.add(t);
		}
		Collections.sort(vec);
		for (int i = n - 1; i >= 0; i--) System.out.print(vec.elementAt(i) + " ");
		
		sc.close();
	}
}
