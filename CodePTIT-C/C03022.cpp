#include <stdio.h>
#define lmt 100000
int sang[lmt + 1];

int check(int x) {
	int sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	if (sum % 5 == 0) return 1;
	return 0;
}

int main()
{
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i*i <= lmt; i++) {
		if (sang[i] == 1) continue;
		for (int j = i*i; j <= lmt; j += i) {
			sang[j] = 1;
		}
	}
	int n, d = 0;
	scanf("%d", &n);
	for (int i = 5; i <= n; i++) {
		if (sang[i] == 0 && check(i) == 1) {
			printf("%d ", i);
			d++;
		}
	}
	printf("\n%d", d);
}
