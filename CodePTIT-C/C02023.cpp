#include <stdio.h>
int min(int a, int b) {
	return (a < b) ? a : b;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%c", (char)97+max(m,n)-min(i,j)-1);
		}
		printf("\n");
	}
}
