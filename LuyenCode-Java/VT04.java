package luyencode;

import java.util.Scanner;

public class VT04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt(), x = sc.nextInt();
		boolean kt = false;
		for (int i = 0; i < n; i++)
		{
			int t = sc.nextInt();
			if (x == t) kt = true;
		}
		if (kt == true) System.out.println("YES");
		else System.out.println("NO");
		
		sc.close();
	}
}
