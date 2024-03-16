#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int t = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			t++;
			for (int j = 1; j <= i; j++) {
				printf("%d ", t);
				t++;
			}
		} else {
			t += i-1;
			for (int j = 1; j <= i; j++) {
				printf("%d ", t);
				t--;
			}
			t += i;
		}
		printf("\n");
	}
}
