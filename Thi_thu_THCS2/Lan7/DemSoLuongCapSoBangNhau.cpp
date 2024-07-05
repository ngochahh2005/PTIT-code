#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	long long f = 1, d = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i+1]) {
			d += f*(f-1)/2;
			f = 1;
		} else f++;
	}
	printf("%lld", d);
}
