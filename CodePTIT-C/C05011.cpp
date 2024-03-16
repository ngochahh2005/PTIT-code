#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m], b[m][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		} 
		printf("Test %d:\n", o);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int sum = 0;
				for (int k = 0; k < m; k++) {
					sum += a[i][k] * b[k][j];
				}
				printf("%d ", sum);
			}
			printf("\n");
		}
	}
}
