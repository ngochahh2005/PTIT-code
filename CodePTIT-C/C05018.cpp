#include <stdio.h>
void trenPhai(int [][25], int, int, int, int, int);
void duoiTrai(int [][25], int, int, int, int, int);

int a[25][25];

void trenPhai(int a[][25], int cd, int cc, int hd, int hc, int d)
{
	for (int j = cd; j <= cc; j++)
	{
		a[hd][j] = d--;
	}
	for (int i = hd + 1; i <= hc; i++)
	{
		a[i][cc] = d--;
	}
	if (cc - cd > 0 && hc - hd > 0) {
		cc--;
		hd++;
		duoiTrai(a, cd, cc, hd, hc, d);
	}
}

void duoiTrai(int a[][25], int cd, int cc, int hd, int hc, int d)
{
	for (int j = cc; j >= cd; j--)
	{
		a[hc][j] = d--;
	}
	for (int i = hc - 1; i >= hd; i--)
	{
		a[i][cd] = d--;
	}
	if (cc - cd > 0 && hc - hd > 0) {
		cd++;
		hc--;
		trenPhai(a, cd, cc, hd, hc, d);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		printf("Test %d:\n", o);
		trenPhai(a, 0, n-1, 0, n-1, n*n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
