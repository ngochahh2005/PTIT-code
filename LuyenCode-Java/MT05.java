package luyencode2;

import java.util.Arrays;
import java.util.Scanner;

public class MT05 {
	public static void sortColumn(int[][] matrix, int column) {
		int[] tempArray = new int[matrix.length];
		for (int i = 0; i < matrix.length; i++) {
			tempArray[i] = matrix[i][column];
		}
		Arrays.sort(tempArray);
		for (int i = 0; i < matrix.length; i++) {
			matrix[i][column] = tempArray[i];
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt(), n = sc.nextInt(), col = sc.nextInt();
		int[][] matrix = new int[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				matrix[i][j] = sc.nextInt();
			}
		}
		sortColumn(matrix, col - 1);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}
}
