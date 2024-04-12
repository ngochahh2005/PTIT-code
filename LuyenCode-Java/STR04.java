package luyencode2;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.stream.Collectors;

public class STR04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Map<Character, Integer> data = new HashMap<Character, Integer>();
		String str = sc.nextLine();
		str = str.toLowerCase();
		int[] dem = new int[150];
		for (int i = 0; i < str.length(); i++) {
			if (Character.isLetterOrDigit(str.charAt(i))) {
				if (!data.containsKey(str.charAt(i))) {
					data.put(str.charAt(i), null);
				}
				dem[(int)Character.valueOf(str.charAt(i))]++;
			}
		}
		for (int i = 48; i < 58; i++) {
			if (data.containsKey((char)i)) data.replace((char)i, dem[i]);
		}
		for (int i = 97; i < 123; i++) {
			if (data.containsKey((char)i)) data.replace((char)i, dem[i]);
		}
		Map<Character, Integer> sortData = data.entrySet().stream().sorted((o1, o2) -> o1.getKey().compareTo(o2.getKey())).collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue, (oldValue, newValue) -> oldValue, LinkedHashMap::new));
		for (char i : sortData.keySet()) {
			System.out.println(i + " " + data.get(i));
		}
		
		sc.close();
	}
}
