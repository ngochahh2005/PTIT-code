#include <stdio.h>
#include <math.h>

int kt(int n) {
	int s = 0, x = n, sumDigit = 0;
	while (n > 0) {
		if (n % 10 == 4) return 0;
		s += n % 10;
		sumDigit += n % 10;
		n /= 10;
		if (n == 0) break;
		s *= 10;
	}
	if (sumDigit % 10 != 0) return 0;
	if (s != x) return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a = pow(10, n-1), b = pow(10, n);
		for (int i = a; i <= b; i++) {
			if (kt(i) == 1) printf("%d ", i);
		}
		printf("\n");
	}
}
