#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int t = i + j;
			if (t >= m) t = m-1;
			printf("%c", (char)64+t);
		}
		printf("\n");
	}	
}
