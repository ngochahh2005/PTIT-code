#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int t = 1, x = 1;
	for (int i = 1; i <= n; i++) {
		int d = n-1;
		for (int j = 1; j <= i; j++) {
			printf("%d ", t);
			t += d;
			d--;
		}
		x++;
		t = x;
		printf("\n");
	}
}
