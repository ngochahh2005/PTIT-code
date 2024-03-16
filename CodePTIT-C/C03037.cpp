#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ss(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int kt (int n) {
	if (n < 2) return 0;
	int can = (int)sqrt((double)n);
	for (int i = 2; i <= can; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
int a[20], count[10], dd[10];
int main()
{
	long long n, d = 0;
	scanf("%lld", &n);
	while (n > 0) {
		a[d] = n % 10;
		if (kt(a[d]) == 1) count[a[d]]++;
		d ++;
		n /= 10;
	}
	qsort(a, d, sizeof(int), ss);
	for (int i = 0; i < d; i++) {
		if (dd[a[i]] == 0 && kt(a[i]) == 1) {
			printf("%d %d\n", a[i], count[a[i]]);
			dd[a[i]] = 1;
		}
	}
}
