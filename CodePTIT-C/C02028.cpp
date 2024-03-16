#include <stdio.h>

int main()
{
	int n, t = 0, d = 0;
	scanf("%d", &n);
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("%c", (char)65+d);
			d += 2;
		}
		t += 2;
		d = t;
		printf("\n");
	}
}
