#include <stdio.h>
#include <math.h>

long long solve(int n) {
	int cnt = 0, kt = 0;
	long long s = (long long)n;
	while (n % 2 == 0) {
		kt = 1;
		n /= 2;
		cnt++;
	}
	if (cnt % 2 != 0) s *= 2;
	for (int i = 3; i <= sqrt(n); i+=2) {
		cnt = 0;
		if (n % i != 0) continue;
		kt = 1;
		while (n % i == 0) {
			n /= i;
			cnt++;
		}
		if (cnt % 2 != 0) s *= i;
	}
	if (n > 1) s *= n;
	return s;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", solve(n));
}
