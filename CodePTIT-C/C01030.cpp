#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, i = 2;
		scanf("%d", &n);
		while (n > 1) {
			while (n % i != 0) i++;
			n /= i;
			printf("%d ", i);
		}
		printf("\n");
	}
}
