#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int t = 2;
		for (int j = 1; j <= i*2-1; j++) {
			printf("%d", t);
			if (j >= i) t-=2;
			else t+=2;
		}
		printf("\n");
	}
}
