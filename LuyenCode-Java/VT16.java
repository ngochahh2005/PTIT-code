package luyencode;

import java.util.Scanner;
import java.util.Vector;

public class VT16 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Vector<Long> vec = new Vector<Long>();
		long t;
		while((t = sc.nextLong()) != 0) {
			if (t < 0) vec.add(t);
		}
		if (vec.size() == 0) System.out.println("NOT FOUND");
		else {
			for (int i = 0; i < vec.size(); i++) {
				System.out.print(vec.elementAt(i) + " ");
			}
		}
		
		sc.close();
	}
}
