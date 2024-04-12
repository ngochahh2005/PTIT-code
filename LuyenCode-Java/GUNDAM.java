package luyencode2;

import java.util.Scanner;

public class GUNDAM {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), m = sc.nextInt();
		char[][] ch = new char[n+5][m+5];
		String str = sc.nextLine();
		for (int i = 0; i < n; i++) {
				str = sc.nextLine();
				for (int j = 0; j < m; j++) {
					ch[i][j] = str.charAt(j);
				}
			ch[i][m] = '#';
		}
		int d = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (ch[i][j] == '.') {
					if (ch[i][j+1] == '.') 
						d++;
					if (ch[i+1][j] == '.')
						d++;
				}
			}
		}
		System.out.println(d);
		
		sc.close();
	}
}
