package luyencode2;

//import java.util.Scanner;
//
//public class POWER2 {
//	
//	public static void main(String[] args) {
//		Scanner sc = new Scanner(System.in);
//		
//		String a = sc.next();
//		int n = sc.nextInt();
//		System.out.println(exp(a, n));
//		
//		sc.close();
//	}
//	
//	public static String mul(String a, Character b) {
//		
//		String str = "";
//		int t = 1, du = 0;
//		for (int i = a.length() - 1; i >= 0; i--) {
//			t = Character.getNumericValue(b) * Character.getNumericValue(a.charAt(i)) + du;
//			du = t / 10;
//			t %= 10;
//			str = Integer.toString(t) + str;
//		}
//		if (du != 0) str = Integer.toString(du) + str;
//		return str;
//		
//	}
//	
//	public static String sum(String a, String b) {
//		
//		String str = "";
//		if (a.length() < b.length()) {
//			String temp = a;
//			a = b;
//			b = temp;
//		}
//		while (a.length() != b.length()) {
//			b = "0" + b;
//		}
//		int sum = 0, du = 0;
//		for (int i = a.length() - 1; i >= 0; i--) {
//			sum = Character.getNumericValue(a.charAt(i)) + Character.getNumericValue(b.charAt(i)) + du;
//			du = sum / 10;
//			sum %= 10;
//			str = Integer.toString(sum) + str;
//		}
//		if (du != 0) str = Integer.toString(du) + str;
//		return str;
//		
//	}
//	
//	public static String bigPro(String a, String b) {
//		
//		String str = "";
//		if (a.length() < b.length()) {
//			String temp = a;
//			a = b;
//			b = temp;
//		}
//		String d = "";
//		for (int i = b.length() - 1; i >= 0; i--) {
//			str = sum(str, mul(a, b.charAt(i)) + d);
//			d += "0";
//		}
//		return str;
//		
//	}
//	
//	public static String exp(String a, int b) {
//		
//		if (b == 0) return "1";
//		String str = exp(a, b/2);
//		if (b % 2 == 0) return bigPro(str, str);
//		else return bigPro(a, bigPro(str, str));
//		
//	}
//}
import java.math.BigInteger;
import java.util.Scanner;

public class POWER2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        int n = sc.nextInt();
        System.out.println(exp(a, n));
        sc.close();
    }

    public static BigInteger exp(String a, int b) {
        return new BigInteger(a).pow(b);
    }
}