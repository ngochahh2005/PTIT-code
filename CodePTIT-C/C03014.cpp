#include <stdio.h>

int ucln (int a, int b) {
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	if (b == 0) return a;
	return ucln(b, a % b);
}

long long bcnn (int a, int b) {
	return (long long)a*b/ucln(a,b);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%lld %d\n", bcnn(a,b), ucln(a,b));
	}
}
