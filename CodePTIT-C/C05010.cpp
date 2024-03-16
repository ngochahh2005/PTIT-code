#include <stdio.h>
int check(int n) {
	if (n < 2) return 0;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int t, sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &t);
			if (j >= i && check(t) == 1) sum += t;
		}
	}
	printf("%d", sum);
}
