#include <stdio.h>
#include <stdlib.h>

int ss (const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main()
{
	int f[55];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 40; i++) {
		f[i] = f[i-1] + f[i-2];
//		printf("%d	", f[i]);
	}
	int n;
	scanf("%d", &n);
	int *result = (int*)bsearch(&n, f, 40, sizeof(int), ss);
	if (result != NULL) printf("1");
	else printf("0");
}
