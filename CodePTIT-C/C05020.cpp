#include <stdio.h>

void trenPhai(long long [][10], int, int, int, int);
void duoiTrai(long long [][10], int, int, int, int);

long long fi[100], a[10][10], cnt = 0;

void trenPhai(long long a[][10], int hd, int hc, int cd, int cc) {
	for (int i = cd; i <= cc; i++) {
		a[hd][i] = fi[cnt++];
	}
	for (int i = hd + 1; i <= hc; i++) {
		a[i][cc] = fi[cnt++];
	}
	if (hc - hd > 0 && cc - cd > 0) {
		duoiTrai(a, hd + 1, hc, cd, cc - 1);
	}
}

void duoiTrai(long long a[][10], int hd, int hc, int cd, int cc) {
	for (int i = cc; i >= cd; i--) {
		a[hc][i] = fi[cnt++];
	}
	for (int i = hc - 1; i >= hd; i--) {
		a[i][cd] = fi[cnt++];
	}
	if (hc - hd > 0 && cc - cd > 0) {
		trenPhai(a, hd, hc - 1, cd + 1, cc);
	}
}

void solve(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	fi[0] = 0;
	fi[1] = 1;
	for (int i = 2; i < 82; i++) {
		fi[i] = fi[i-1] + fi[i-2];
	}
	trenPhai(a, 0, n-1, 0, n-1);
	solve(n);
}
