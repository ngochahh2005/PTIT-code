#include <stdio.h>
#include <math.h>
int min(int a, int b) {
	return (a < b) ? a : b;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		int k = i;
		for (int j = 1; j <= m; j++) {
			if (j == 1) printf("%d", i);
			else {
				int t = i + j - 1;
				if (t > m) k--;
				else k = t;
				printf("%d", k);
			}
		}
		printf("\n");
	}
}
