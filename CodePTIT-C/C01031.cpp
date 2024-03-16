#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 2;
	while (n > 1) {
		while (n % i != 0) i++;
		printf("%d", i);
		n /= i;
		if (n == 1) break;
		printf("x");
	}
}
