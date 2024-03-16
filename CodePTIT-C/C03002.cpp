#include <stdio.h>
#include <math.h>

int kt(int n) {
	if (n == 1) return 0;
	int can = (int)sqrt((double)n);
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (kt(i) == 1) printf("%d\n", i);
	}
}
