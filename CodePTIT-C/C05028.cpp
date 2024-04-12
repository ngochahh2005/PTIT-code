#include <stdio.h>
int a[15][15];
void swap(int n, int m) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			a[i][j] = 1 - a[i][j];
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char str[15];
	for (int i = 0; i < n; i++) {
		gets(str);
		for (int j = 0; j < n; j++) {
			a[i][j] = str[j] - '0';
		}
	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
	int cnt = 0;
	for (int i = n-1; i >= 0; i--) {
		int c = 0;
		for (int j = n-1; j >= 0; j--) {
			if (a[i][j] == 1) {
				swap(i, j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}

