#include <stdio.h>

int kt(int x) {
	int s = 0, n = x, sumDigit = 0, check6 = 0;
	while (x > 0) {
		if (x % 10 == 6) check6 = 1;
		s += x % 10;
		sumDigit += x % 10;
		x /= 10;
		if (x == 0) break;
		s *= 10;
	}
	if (check6 == 0) return 0;
	if (s != n) return 0;
	if (sumDigit % 10 != 8) return 0;
	return 1;
} 

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = a; i <= b; i++) {
		if (kt(i) == 1) printf("%d ", i);
	}
}
