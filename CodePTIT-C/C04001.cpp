#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			int t;
			scanf("%d", &t);
			if (t % 2 == 0) printf("%d ", t);
		}
		printf("\n");
	}
}
