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
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = a; i <= b; i++) {
		if (sum(i) == i) printf("%d ", i);
	}
}
