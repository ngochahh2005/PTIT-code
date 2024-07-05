#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int mi = a[1] - a[0], cnt = 0;
	for (int i = 1; i < n - 1; i++) {
		mi = (mi < a[i+1] - a[i]) ? mi : a[i+1] - a[i];
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i+1] - a[i] == mi) cnt++;
	}
	printf("%d\n%d", mi, cnt);
} 
