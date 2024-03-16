#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int check = 0;
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				if (a[i] == a[j]) {
					printf("%d\n", a[i]);
					check = 1;
					break;
				}
			}
			if (check == 1) break;
		}
		if (check == 0) printf("NO\n");
	}
}
