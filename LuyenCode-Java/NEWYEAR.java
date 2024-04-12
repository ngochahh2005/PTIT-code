package luyencode2;

import java.util.Scanner;
import java.util.Vector;

public class NEWYEAR {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String temp = sc.nextLine();
		Vector<String> str = new Vector<String>();
		for (int i = 0; i < n; i++) {
			temp = sc.nextLine();
			str.add(temp);
		}
		for (int i = 0; i < str.size(); i++) {
			for (int j = i+1; j < str.size(); j++) {
//				System.out.println(str.elementAt(i) + "\t"  + str.elementAt(j));
				if (str.elementAt(i).equals(str.elementAt(j))) {
					str.remove(j);
					j--;
				}
			}
		}
		System.out.println(str.size());
		
		sc.close();
	}
}
