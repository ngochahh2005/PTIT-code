#include <stdio.h>

int main()
{
	int a[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	int n, s = 0, x;
	scanf("%d", &n);
	x = n;
	while (n > 0) {
		s += a[n%10];
		n /= 10;
	}
	if (s == x) printf("1");
	else printf("0");
}
