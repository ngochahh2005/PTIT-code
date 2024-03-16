#include <stdio.h>

int main()
{
	int n, d = 0;
	scanf("%d", &n);
	while (n > 0) {
		d++;
		n /= 10;
	}
	printf("%d", d);
}
