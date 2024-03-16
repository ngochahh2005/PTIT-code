#include <stdio.h>

int check(int x) {
	int s = 0, n = x, check9 = 1;
	while (x > 0) {
		if (x % 10 == 9) check9 = 0;
		s += x % 10;
		x /= 10;
		if (x == 0) break;
		s *= 10;
	}
	if (check9 == 0) return 0;
	if (s != n) return 0;
	return 1;
} 

int main()
{
	int n, d = 0;
	scanf("%d", &n);
	for (int i = 2; i < n; i++) {
		if (check(i) == 1) {
			printf("%d ", i);
			d++;
		}
	}
	printf("\n%d", d);
}
