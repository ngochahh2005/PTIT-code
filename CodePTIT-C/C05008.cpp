#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int m, n;
		scanf("%d%d", &m, &n);
		int a[n][m], sumRow = 0, sumCol = 0, maxRow = 0, maxCol = 0, indexRow = 0, indexCol = 0;
		for (int i = 0; i < m; i++) {
			sumRow = 0;
			for (int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
				sumRow += a[i][j];
			}
			if (sumRow > maxRow) {
				maxRow = sumRow;
				indexRow = i;
			}
		}
		int b[n][m], d = 0;
		for (int i = 0; i < m; i++) {
			if (i == indexRow) continue;
			for (int j = 0; j < n; j++) {
				b[d][j] = a[i][j];
			}
			d++;
		}
		for (int j = 0; j < n; j++) {
			sumCol = 0;
			for (int i = 0; i < d; i++) {
				sumCol += b[i][j];
			}
			if (sumCol > maxCol) {
				maxCol = sumCol;
				indexCol = j;
			}
		}
		printf("Test %d:\n", o);
		for (int i = 0; i < d; i++) {
			for (int j = 0; j < n; j++) {
				if (j == indexCol) continue;
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
	}
}
