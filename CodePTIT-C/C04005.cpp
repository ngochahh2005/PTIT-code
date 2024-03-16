#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n], ma = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			ma = (a[i] > ma) ? a[i] : ma;
		}
		printf("%d\n", ma);
		for (int i = 0; i < n; i++) {
			if (a[i] == ma) printf("%d ", i);
		}
		printf("\n");
	}
}
