#include <stdio.h>
int kt(long long n) {
	long long a[30], d = 0;
	while (n > 0) {
		a[d] = n % 10;
		d++;
		n /= 10;
	}
	if (a[0] / 2 == a[d-1] || a[d-1] / 2 == a[0]) {
		long long left = 1, right = d-2;
		while (left < right) {
			if (a[left] != a[right]) return 0;
			left++;
			right--;
		}
		return 1;
	}
	return 0;
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
