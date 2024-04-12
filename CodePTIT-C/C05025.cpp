#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", o);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = i; k < n; k++) {
					for (int l = j; l < m; l++) {
						if (a[i][j] > a[k][l]) swap(&a[i][j], &a[k][l]);
					}
				}
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
