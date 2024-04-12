package luyencode2;

import java.util.Scanner;

public class DATE2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int h, m;
		h = n / 3600;
		n %= 3600;
		m = n / 60;
		n %= 60;
		String hour, minute, second;
		hour = Integer.toString(h);
		minute = Integer.toString(m);
		second = Integer.toString(n);
		if (h / 10 == 0) hour = "0" + hour;
		if (m / 10 == 0) minute = "0" + minute;
		if (n / 10 == 0) second = "0" + second;
		System.out.println(hour + ":" + minute + ":" + second);
		
		System.out.println();
		
		sc.close();
	}
}
