#include <stdio.h>
#include <math.h>
int kt(int n) {
	if (n < 2) return 0;
	int can = sqrt(n);
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
} 

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			int x;
			scanf("%d", &x);
			if (kt(x) == 1) printf("%d ", x);
		}
		printf("\n");
	}
}
