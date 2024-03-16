#include <stdio.h>
#include <math.h>
int check(int n) {
	int kt = 1, can = (int)sqrt((double)n);
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) {
			kt = 0;
			break;
		}
	}
	return kt;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (check(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
