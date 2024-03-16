#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		int a[n+5][n+5], b[n+5][n+5];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j <= i) a[i][j] = j;
				else a[i][j] = 0;
				if (j >= i) b[i][j] = i;
				else b[i][j] = 0;
			}
		}
		printf("Test %d:\n", o);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				int s = 0;
				for (int k = 1; k <= n; k++) {
					s += a[i][k] * b[k][j];
				}
				printf("%d ", s);
			}
			printf("\n");
		}
	}
}
