#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < n; j++) {
			if (j > i) t++;
			printf("%d ", t);
		}
		printf("\n");
	}
}
