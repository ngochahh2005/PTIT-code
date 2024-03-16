#include <stdio.h>
typedef long long ll;

ll gcd(ll a, ll b) {
	if (a < b) {
		ll tmp = a;
		a = b;
		b = tmp;
	}
	if (b == 0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a/gcd(a, b)*b;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ll n, m, res = 1, i;
		scanf("%lld%lld", &n, &m);
		for (i = n; i <= m; i++) {
			res = lcm(res, i);
		}
		printf("%lld\n", res);
	}
}
