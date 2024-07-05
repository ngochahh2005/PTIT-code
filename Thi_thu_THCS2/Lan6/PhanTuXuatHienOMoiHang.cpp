#include <stdio.h>
#include <stdlib.h>

int f[100005];

int main() {
	int n, x;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &x);
			if (f[x] == i-1) f[x] = i;
		}
	}
	int kt = 0;
	for (int i = 0; i <= 100000; i++) {
		if (f[i] == n) {
			printf("%d ", i);
			kt = 1;	
		}
	}
	if (kt == 0) printf("NOT FOUND");
}
