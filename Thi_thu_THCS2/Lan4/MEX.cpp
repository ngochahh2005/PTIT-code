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
	int vl = 0;
	if (a[0] > 1) {
		printf("1");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > vl) {
			if (a[i] - vl > 1) {
				printf("%d", vl + 1);
				return 0;
			}
			vl = a[i];
		}
	}
	if (a[n-1] == vl) printf("%d", vl + 1);
	if (a[n-1] == 0) printf("1");
}
