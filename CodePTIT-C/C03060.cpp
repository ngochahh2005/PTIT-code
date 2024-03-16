#include <stdio.h>
#include <math.h>

int main()
{
	long long n, k, gt = 1, i = 1, count = 0;
	scanf("%lld%lld", &n, &k);
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			int x = i;
			while (x % 2 == 0) {
				count++;
				x /= 2;
			}
		}
	}
	if (count >= k) printf("Yes");
	else printf("No");
}
