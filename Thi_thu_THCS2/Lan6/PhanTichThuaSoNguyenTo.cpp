#include <stdio.h>
#include <math.h>

int a[1000005];
void pt(int x) {
	int n = x;
	int cnt = 0;
	if (n % 2 == 0) printf("2 ");
	while (n % 2 == 0) {
		n /= 2;
		a[cnt++] = 2;
	}
	for (int i = 3; i <= x; i += 2) {
		if (n == 0) break;
		if (n % i != 0) continue;
		while (n % i == 0) {
			a[cnt++] = i;
			n /= i;
		}
		printf("%d ", i);
	}
	printf("\n");
	int f = 1;
	for (int i = 0; i < cnt; i++) {
		if (a[i] != a[i+1]) {
			printf("(%d, %d) ", a[i], f);
			f = 1;
		} else f++;
	}
	printf("\n");
	for (int i = 0; i < cnt; i++) {
		if (i == 0) printf("%d", a[i]);
		else printf(" x %d", a[i]);
	}
	
}

int main() {
	int n;
	scanf("%d", &n);
	pt(n);
}
