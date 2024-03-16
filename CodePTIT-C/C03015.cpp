#include <stdio.h>

long long out(long long n) {
	long long i = 2, s = 2;
	while (n % 2 == 0) {
		n /= i;
	}
	for (i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			s = i;
			n /= i;
		}
	}
	if (n > s) s = n;
	return s;
} 

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", out(n));
	}
}
