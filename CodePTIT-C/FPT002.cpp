#include <stdio.h>
int nhan(int a[], int b[], int m, int n, int p) {
}

int main()
{
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[m][n], b[n][p], c[p][q];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &b[i][j]);
		}
	}	
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	int d[m][p], s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			s = 0;
			for (int k = 0; k < n; k++) {
				s += a[i][k] * b[k][j];
			}
			d[i][j] = s;
		}
	}
	int f[m][q];
	s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			s = 0;
			for (int k = 0; k < p; k++) {
				s += d[i][k] * c[k][j];
			}
			f[i][j] = s;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			printf("%d ", f[i][j]);
		}
		printf("\n");
	}
	
}
