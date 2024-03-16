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
		int left = 0, right = n-1, kt = 1;
		while (left < right) {
			if (a[left] != a[right]) kt = 0;
			left ++;
			right --;
		}
		if (kt == 1) printf("YES\n");
		else printf("NO\n");
	}
}
