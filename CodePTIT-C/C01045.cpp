#include <stdio.h>

int main()
{
	int n, dau, cuoi;
	scanf("%d", &n);
	cuoi = n % 10;
	while (n > 0) {
		dau = n % 10;
		n /= 10;
	}
	printf("%d %d", dau, cuoi);
}
