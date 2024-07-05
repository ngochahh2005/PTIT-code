#include <stdio.h>

int a[505][505];

int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int q;
	scanf("%d", &q);
	while (q--) {
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;
		printf("%d\n", a[x][y]);
	}
}
