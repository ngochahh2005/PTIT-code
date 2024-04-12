package luyencode2;

import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class MT06 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt();
		Vector<Integer> vec = new Vector<Integer>();
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int t = sc.nextInt();
				if (t > 0) {
					int can = (int)Math.sqrt((double)t);
					if (can * can == t && !vec.contains(t)) {
						vec.add(t);
					}
				}
			}
		}
		Collections.sort(vec);
		if (vec.size() == 0) System.out.println("NOT FOUND");
		else for (int i = 0; i < vec.size(); i++) {
			System.out.print(vec.elementAt(i) + " ");
		}
		
		sc.close();
	}
}