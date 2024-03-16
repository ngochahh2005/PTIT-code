#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int left = (int)ceil(sqrt((double)m));
	int right = (int)sqrt((double)n);
	printf("%d\n", right-left+1);
	for (int i = left; i <= right; i++) {
		printf("%d\n", i*i);
	}
}
