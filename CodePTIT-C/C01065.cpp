#include <stdio.h>
int kt(long long x) {
	if (x < 2) return 0;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}
int count[20], dd[20];
int main()
{
	long long n;
	scanf("%lld", &n);
	int a[20], d = 0;
	while (n) {
		a[d] = n % 10;
		if (kt(a[d]) == 1) count[a[d]]++;
		d++;
		n /= 10;
	} 
	for (int i = d-1; i >= 0; i--) {
		if (kt(a[i]) == 1 && dd[a[i]] == 0) {
			printf("%d %d\n", a[i], count[a[i]]);
			dd[a[i]]++;
		}
	}
}
