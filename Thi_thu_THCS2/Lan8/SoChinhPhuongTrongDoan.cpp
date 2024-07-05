#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
	ll a, b;
	scanf("%lld %lld", &a, &b);
	ll x = (ll)ceil(sqrt(a)), y = sqrt(b), i = 0;
	for (i = x; i <= y; i++) {
		printf("%lld ", i*i);
	}
}
