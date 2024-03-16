#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j == 1) printf("%d", i);
			else {
				int t = i + j - 1;
				if (t > m) t = m + 1 - j;
				printf("%d", t);	
			}
			
		}
		printf("\n");
	}	
}
