#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n, m;
		scanf("%d%d", &n, &m);
		int x = n*m;
		int a[x+5];
		for (int i = 0; i < x; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < x - 1; i++) {
			for (int j = i+1; j < x; j++) {
				if (a[j] < a[i]) swap(&a[i], &a[j]);
			}
		}
		int cnt = 0;
		printf("Test %d:\n", o);
		for (int i = 0; i < x; i++) {
			printf("%d ", a[i]);
			cnt++;
			if (cnt == m) {
				printf("\n");
				cnt = 0;
			}
		}
	}
}
