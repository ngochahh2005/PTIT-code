#include <stdio.h>
void pt(int n) {
	int d = 0, i = 2;
	printf("%d = ", n);
	while (n > 1) {
		while (n % i != 0) i++;
		n /= i;
		d++;
		if (n % i != 0) {
			printf("%d^%d", i, d);
			d = 0;
			if (n == 1) break;
			printf(" * ");
		}
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		pt(n);
	}
}
