#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n, d = 0;
		scanf("%lld", &n);
		long long a[20];
		while (n > 0) {
			a[d] = n % 10;
			d++;
			n /= 10;
		}
		int kt = 1;
		for (int i = 0; i < d-1; i++) {
			if (a[i] < a[i+1]) {
				kt = 0;
				break;
			}
//			printf("%lld ", a[i]);
		}
		if (kt == 0) printf("NO\n");
		else printf("YES\n");
	}
}
