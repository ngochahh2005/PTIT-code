#include <stdio.h>
typedef unsigned long long ull;

ull bcnn[105];

ull ucln(ull a, ull b) {
	if (a < b) {
		ull tmp = a;
		a = b;
		b = tmp;
	}
	if (b == 0) return a;
	return ucln(b, a%b);
}

void solve() {
	bcnn[1] = 1;
	ull i;
	for (i = 2; i <= 100; i++) {
		if (bcnn[i-1] % i != 0) {
			bcnn[i] = i*bcnn[i-1]/(ucln(i, bcnn[i-1]));
		} else bcnn[i] = bcnn[i-1];
		printf("%lld	%lld\n", i, bcnn[i]);
	}
} 

int main()
{
	int t;
	scanf("%d", &t);
	solve();
	while (t--) {
		ull n;
		scanf("%lld", &n);
		printf("%lld\n", bcnn[n]);
	}
}
