#include <stdio.h>
#include <math.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		int d = 1;
		for (int j = i; j > 1; j--) {
			if (d > m) continue;
			printf("%d", j);	
			d++;
		}
		for (int j = 1; j <= m-i+1; j++) printf("%d", j);
		printf("\n");
	}	
}
