#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &m, &n);
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int x, y;
	scanf("%d%d", &x, &y);
	x--;
	y--;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == x) printf("%d ", a[y][j]);
			else if (i == y) printf("%d ", a[x][j]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
