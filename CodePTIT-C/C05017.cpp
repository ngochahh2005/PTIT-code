#include <stdio.h>

void trenPhai(int [][105], int, int, int, int); 
void duoiTrai(int [][105], int, int, int, int); 

int a[105][105];

void trenPhai(int a[][105], int hd, int hc, int cd, int cc) {
	for (int i = cd; i <= cc; i++) {
		printf("%d ", a[hd][i]);
	}
	for (int i = hd + 1; i <= hc; i++) {
		printf("%d ", a[i][cc]);
	}
	if (hc - hd > 0 && cc - cd > 0) {
		duoiTrai(a, hd + 1, hc, cd, cc - 1);
	}
}

void duoiTrai(int a[][105], int hd, int hc, int cd, int cc) {
	for (int i = cc; i >= cd; i--) {
		printf("%d ", a[hc][i]);
	}
	for (int i = hc - 1; i >= hd; i--) {
		printf("%d ", a[i][cd]);
	}
	if (hc > hd && cc > cd) {
		trenPhai(a, hd, hc - 1, cd + 1, cc);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		trenPhai(a, 0, n-1, 0, m-1);
		printf("\n");
	}
}
