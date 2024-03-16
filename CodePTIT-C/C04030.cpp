#include <stdio.h>
#include <stdlib.h>

int tang(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int giam(const void *a, const void *b) {
	return -(*(int*)a - *(int*)b);
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
		qsort(a, n, sizeof(int), tang);
		qsort(b, n, sizeof(int), giam);
		int la = 0, lb = 0; 
		printf("Test %d:\n", o);
		for (int i = 0; i < 2*n; i++) {
			if (i % 2 == 0) {
				printf("%d ", a[la]);
				la++;
			} else {
				printf("%d ", b[lb]);
				lb++;
			}
		}
		printf("\n");
	}
}
