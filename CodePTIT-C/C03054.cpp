#include <stdio.h>
#include <math.h>

long long cat(long long n) {
	long long s = 0, a[30], d = 0;
	while (n > 0) {
		long long digit = n % 10;
		if (digit == 0 || digit == 1 || digit == 8 || digit == 9) {
			if (digit == 1) a[d] = 1;
			else a[d] = 0;
			d++;
			n /= 10;
		} else return -1;
	}
	for (int i = 0; i < d; i++) {
//		printf("%lld\n", a[i]);
		s += a[i] * pow(10, i);
	}
	return s;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		if (cat(n) == -1 || cat(n) == 0) printf("INVALID\n");
		else printf("%lld\n", cat(n));
	}
}
