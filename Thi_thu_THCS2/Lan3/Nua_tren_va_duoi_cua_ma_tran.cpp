#include <stdio.h>
#include <math.h>

int check(int x) {
	int can = sqrt(x);
	if (x < 2) return 0;
	for (int i = 2; i <= can; i++) {
		if (x % i == 0) return 0;
	}
	return 1;
} 

int main() {
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	int cntu = 0, cntd = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (check(a[i][j]) == 1) cntd++;
//			printf("%d ", a[i][j]);
		}
//		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (check(a[i][j]) == 1) cntu++;
//			printf("%d ", a[i][j]);
		}
//		printf("\n");
	}
//	printf("%d	%d\n", cntu, cntd);
	if (cntu == cntd) printf("30tech");
	else if (cntu > cntd) printf("28tech");
	else printf("29tech");
}
