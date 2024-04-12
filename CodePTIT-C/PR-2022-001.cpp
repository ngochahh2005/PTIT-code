#include <stdio.h>

int main() {
	long long n, u0, d;
    scanf("%lld%lld%lld", &u0, &d, &n);
    printf("%lld", n/2*(2*u0 + d*(n-1)));
}
