#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
} 

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int mi = 1e9;
		qsort(a, n, sizeof(int), cmp);
		for (int i = 1; i < n; i++) {
			mi = min(a[i]-a[i-1], mi);
		}
		int cnt = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i-1] == mi) cnt++;
		}
		printf("%d %d\n", mi, cnt);
	}
}
