#include <stdio.h>
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int n;
	scanf("%d", &n);
	int t[n], d[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &t[i], &d[i]);
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (t[j] > t[i]) {
				swap(&t[j], &t[i]);
				swap(&d[j], &d[i]);
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (t[i] > sum) {
			sum = t[i] + d[i];
		} else {
			sum += d[i];
		}
//		printf("%d\n", sum);
	}
	printf("%d", sum);
}
