package luyencode2;

import java.util.Scanner;
import java.util.Vector;

public class PRIMFAC {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		long n = sc.nextLong(), i = 2, k = 0, d = 0;
		Vector<Long> p = new Vector<Long>();
		Vector<Long> a = new Vector<Long>();
		while (n > 1) {
			if (n % i == 0) {
				d++;
				n /= i;
			} else {
				if (d != 0) {
					p.add(i);
					a.add(d);
					d = 0;
					k++;
				}
				while(n % i != 0) i++;
			}
		}
		if (d != 0) {
			p.add(i);
			a.add(d);
			k++;
		}
		System.out.println(k);
		for (int j = 0; j < p.size(); j++) {
			System.out.println(p.elementAt(j) + " " + a.elementAt(j));
		}
		
		sc.close();
	}
}
