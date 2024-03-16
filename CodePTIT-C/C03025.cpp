#include <stdio.h>

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int csnt(int n) {
	int s = 0;
	while (n) {
		int dg = n % 10;
		if (dg != 2 && dg != 3 && dg != 5 && dg != 7)
			return 0;
		s += dg;
		n /= 10;
	}
	if (isPrime(s) == 0) return 0;
	return 1; 
} 

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++) {
			if (csnt(i) == 1) {
				if (isPrime(i) == 1) cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}
