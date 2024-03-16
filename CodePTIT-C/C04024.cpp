#include <stdio.h>
#include <stdlib.h>
int ss(const void *a, const void *b) {
	return -(*(int*)a - *(int*)b);
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), ss);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
