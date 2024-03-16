#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n, m, pos;
		scanf("%d%d%d", &n, &m, &pos);
		int a[n], b[m];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int j = 0; j < m; j++) {
			scanf("%d", &b[j]);
		}
		printf("Test %d:\n", o);
		for (int i = 0; i < n; i++) {
			if (i == pos)
				for (int j = 0; j < m; j++) printf("%d ", b[j]);
			printf("%d ", a[i]);	
		}
		if (pos == n) for (int j = 0; j < m; j++) printf("%d ", b[j]);
		printf("\n");
	}
}
