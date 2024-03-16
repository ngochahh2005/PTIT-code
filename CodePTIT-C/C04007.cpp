#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < m; j++) {
		scanf("%d", &b[j]);
	}
	int pos;
	scanf("%d", &pos);
	for (int i = 0; i < n; i++) {
		if (i == pos)
			for (int j = 0; j < m; j++) printf("%d ", b[j]);
		printf("%d ", a[i]);	
	}
	if (pos == n) for (int j = 0; j < m; j++) printf("%d ", b[j]);
}
