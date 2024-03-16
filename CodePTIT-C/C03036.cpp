#include <stdio.h>
#include <math.h>

int kt(long long n) {
	if (abs(n) < 10 && n % 2 != 0) return 1;
	long long s = 0, x = n, sumDigit;
	while (n > 0) {
		if ((n % 10) % 2 == 0) return 0;
		sumDigit += n % 10;
		s += n %10;
		n /= 10;
		if (n == 0) break;
		s *= 10;
	}
	if (s != x) return 0;
	if (sumDigit % 2 == 0) return 0;
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		if (n < 0) n = -n;
		if (kt(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
