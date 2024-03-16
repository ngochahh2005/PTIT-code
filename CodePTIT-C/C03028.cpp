#include <stdio.h>

int pascal(int i, int j) {
	if (j == 0 || j == i) return 1;
	return pascal(i - 1, j - 1) + pascal(i - 1,j);
}

void xuat (int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", pascal(i,j));
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	xuat(n);
}
