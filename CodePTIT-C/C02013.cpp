#include <stdio.h>

int main()
{
	int n, m, x;
	scanf("%d%d", &n, &m);
	x = (n > m) ? n : m;
	for (int i = 1; i <= n; i++) {
		int k = 1, t = x;
		for (int j = m; j > 0; j--) {
			if (t < 1) k++;
			else k = t;
			printf("%d", k);
			t--;
			
		}
		x--;
		printf("\n");
	}	
}
