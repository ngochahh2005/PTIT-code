#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
				int t = i + j - 1;
				if (t > m) t = m + 1 - j;
				printf("%c", (char)65+t-1);	
			
			
		}
		printf("\n");
	}	
}
