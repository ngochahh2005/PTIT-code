#include <stdio.h>

int main()
{
	int d, c;
	scanf("%d%d", &c, &d);
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= c; j++) {
			if (i == 1 || i == d) printf("*");
			else {
				if (j == 1 || j == c) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
}
