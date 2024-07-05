#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

double max(double a, double b) {
	return (a > b) ? a : b;
}

int a[100005];
int main() {
	int n, l;
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	double d = max((double)a[0] - 0, (double)l - a[n-1]);
	for (int i = 0; i < n-1; i++) {
		d = max(d, (double)(a[i+1]-a[i])/2);
	}
	printf("%.10lf", d);
}
