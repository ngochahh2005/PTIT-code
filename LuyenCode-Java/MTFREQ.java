package luyencode2;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class MTFREQ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, Integer> map = new LinkedHashMap<>();
        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();
            map.compute(t, (key, value) -> {
                if (value == null) {
                    return 1;
                } else {
                    return value + 1;
                }
            });
        }
        System.out.println(map.size());
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
        sc.close();
    }
}
