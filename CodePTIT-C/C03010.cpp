#include <stdio.h>

int a[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int sum(int n) {
	int s = 0;
	while (n > 0) {
		s += a[n % 10];
		n /= 10;
	}
	return s;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (sum(i) == i) printf("%d ", i);
	}
}
