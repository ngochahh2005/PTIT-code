#include <stdio.h>
#include <math.h>
int kt(int n) {
	if (n < 2) return 0;
	int can = sqrt(n);
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (kt(a[i]) == 1) count++;
	}
	printf("%d ", count);
	for (int i = 0; i < n; i++) {
		if (kt(a[i]) == 1) printf("%d ", a[i]);
	}
}
