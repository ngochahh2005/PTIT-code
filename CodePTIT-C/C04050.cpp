#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int binarySearch(int a[], int l, int r, int x) {
	if (r >= l) {
		int mid = (l+r)/2;
		if (a[mid] == x) return 1;
		if (a[mid] < x) return binarySearch(a, mid + 1, r, x);
		return binarySearch(a, l, mid - 1, x);
	}
	return 0;
}

int dda[1005], ddb[1005];

int main()
{
	int n, m, t;
	scanf("%d%d", &n, &m);
	int n1 = 0, m1 = 0;
	int a[1000], b[1000], giao[1000], a_b[1000], b_a[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (dda[t] == 0) a[n1++] = t;
		dda[t] = 1;
	}
	qsort(a, n1, sizeof(int), cmp);
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		if (ddb[t] == 0) b[m1++] = t;
		ddb[t] = 1;
	}
	qsort(b, m1, sizeof(int), cmp);
	int cnt = 0, cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n1; i++) {
		if (binarySearch(b, 0, m1, a[i]) == 0) {
			a_b[cnt1++] = a[i];
		} else {
			giao[cnt++] = a[i];
		}
	}
	for (int i = 0; i < m1; i++) {
		if (binarySearch(a, 0, n1, b[i]) == 0)
			b_a[cnt2++] = b[i];
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d ", giao[i]);
	}
	printf("\n");
	for (int i = 0; i < cnt1; i++) {
		printf("%d ", a_b[i]);
	}
	printf("\n");
	for (int i = 0; i < cnt2; i++) {
		printf("%d ", b_a[i]);
	}
}
