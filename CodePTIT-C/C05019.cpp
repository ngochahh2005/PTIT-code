#include <stdio.h>
#include <stdbool.h>
void trenPhai(int [][25], int, int, int, int, int);
void duoiTrai(int [][25], int, int, int, int, int);

int prime[500], a[25][25];

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void trenPhai(int a[][25], int hd, int hc, int cd, int cc, int cnt) {
	for (int i = cd; i <= cc; i++) {
		a[hd][i] = prime[cnt++];
	}
	for (int i = hd + 1; i <= hc; i++) {
		a[i][cc] = prime[cnt++];
	}
	if (hc - hd > 0 && cc - cd > 0) {
		duoiTrai(a, hd + 1, hc, cd, cc - 1, cnt);
	}
}

void duoiTrai(int a[][25], int hd, int hc, int cd, int cc, int cnt) {
	for (int i = cc; i >= cd; i--) {
		a[hc][i] = prime[cnt++];
	}
	for (int i = hc - 1; i >= hd; i--) {
		a[i][cd] = prime[cnt++];
	}
	if (hc - hd > 0 && cc - cd > 0) {
		trenPhai(a, hd, hc - 1, cd + 1, cc, cnt);
	}
}

void solve(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int t, count = 0;
	scanf("%d", &t);
	for (int i = 2; i <= 3000; i++) {
		if (isPrime(i)) {
			prime[count] = i;
			count++;
		}
	}
//	printf("%d\n", count);
//	for (int i = 0; i < count; i++) {
//		printf("%d ", prime[i]);
//	}
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		trenPhai(a, 0, n - 1, 0, n - 1, 0);
		printf("Test %d:\n", o);
		solve(n);
	} 
}
