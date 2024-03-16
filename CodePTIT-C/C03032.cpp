#include <stdio.h>
int sang[1000005];

int kt(int n) {
	while (n > 0) {
		if (sang[n % 10] == 1) return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= 1000000; j+=i) {
			sang[j] = 1;
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, d = 0;
		scanf("%d%d", &a, &b);
		for (int i = a; i <= b; i++) {
			if (sang[i] == 0 && kt(i) == 1) d++;
		}
		printf("%d\n", d);
	}
}
