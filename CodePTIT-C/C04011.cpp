#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n+5];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int count = 1;
		for (int i = 1; i < n; i++) {
			int kt = 1;
			for (int j = 0; j < i; j++) {
				if (a[j] > a[i]) {
					kt = 0;
					break;
				}
			}
			if (kt == 1) count++;
		}
		printf("%d\n", count);
	}
}
