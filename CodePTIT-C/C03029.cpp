#include <stdio.h>

int kt(long long n) {
	while (n > 0) {
		if ((n % 10) % 2 != 0) return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf("%lld", &n);
		if (kt(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
