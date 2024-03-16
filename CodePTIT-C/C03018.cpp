#include <stdio.h>
#include <stdlib.h>

int f[55];
int sang[1005]; 

int ss (const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int sumDigit(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int ktFibo(int n) {
	int *result = (int*)bsearch(&n, f, 40, sizeof(int), ss);
	if (result != NULL) return 0;
	return 1;
}

int main()
{
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 40; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 31; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= 1000; j += i) {
			sang[j] = 1;
		}
	}
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = a; i <= b; i++) {
		if (sang[i] == 0 && ktFibo(sumDigit(i)) == 0) printf("%d ", i);
	}
}
