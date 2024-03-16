#include <stdio.h>
void pt(int n, int t) {
	int i = 2, d = 0;
	printf("Test %d: ", t);
	while (n > 1) {
		while (n % i != 0) i++;
		n /= i;
		d++;
		if (n % i != 0) {
			printf("%d(%d) ", i, d);
			d = 0;
		}
	}
	printf("\n");
}

int main()
{
	int t = 0; 
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		pt(n,o);
	}
}
