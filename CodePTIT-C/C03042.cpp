#include <stdio.h>
int kt(int n) {
	int a[20], d = 0;
	while (n > 0) {
		a[d] = n % 10;
		d++;
		n /= 10;
	}
//	for (int i = 0; i < d; i++) printf("%d", a[i]);
//	printf("\n");
	for (int i = 0; i < d - 1; i++) {
		if (a[i] >= a[i+1]) return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, d = 0;
		scanf("%d%d", &a, &b);
		for (int i = a; i <= b; i++) {
			if (kt(i) == 1) {
				d++;
//				printf("%d\n", i);
			}
		}
		printf("%d\n", d);
	}
}
