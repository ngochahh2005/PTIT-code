#include <stdio.h>
#include <math.h>

int xuli(long long int n) {
	int ok = 1, cuoi, x1 = n % 10; 
	n /= 10;
	int x2 = n % 10; 
	n /= 10;
	if (x1 < x2) return 0;
	while (n > 0) {
		cuoi = n % 10; 
		int t = x2; 
		x2 = cuoi;
		x1 = t;
		if (x2 > x1) return 0;
		n /= 10;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int dau = pow(10, n-1);
		int cuoi = pow(10, n);
		for (long long i = dau; i <= cuoi; i++) {
			if (xuli(i)) printf("%lld ", i);
		}
		printf("\n");
	}
}
