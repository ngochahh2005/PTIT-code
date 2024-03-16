#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			int t = j + i;
			if (t >= m) t = m-1;
			printf("%c", (char)65+t);
		}
		printf("\n");
	}
}
