#include <stdio.h>

int main()
{
	long long f[93];
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= 92; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", f[n]);
	}
}
