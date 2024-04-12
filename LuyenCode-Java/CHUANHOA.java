package luyencode2;

import java.util.Scanner;

public class CHUANHOA {
	public static String remove(String str, int pos) {
		return str.substring(0, pos) + str.substring(pos+1);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		String str = sc.nextLine();
		while (t-- > 0) {
			str = sc.nextLine();
			int i = 0;
			while (i < str.length()) {
				if (i == 0 && str.charAt(i) == ' ') {
					str = remove(str, 0);
				} else {
					if (i == str.length() - 1) {
						if (str.charAt(i) == ' ')
							str = remove(str, i);
						else i++;
					} else {
						if (str.charAt(i) == ' ' && str.charAt(i + 1) == ' ') 
							str = remove(str, i);
						else i++;
					}
				}
//				System.out.println(str + "\t" + str.length() + "\t" + i);
			}
			System.out.println(str);
		}
		
		sc.close();
	}
}
