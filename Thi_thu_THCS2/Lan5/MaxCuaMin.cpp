#include <stdio.h>
#define ll long long
ll max(ll a, ll b) {
	return (a > b) ? a: b;
}

ll min(ll a, ll b) {
	return (a < b) ? a : b;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n+5], b[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	ll ma = 0, mi = 1e9;
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			mi = min((ll)a[i] * a[j], (ll)b[i] * b[j]);
			ma = max(ma, mi);
		}
	}
	printf("%lld", ma);
}
