#include <stdio.h>
void trenPhai(int [][105], int, int, int, int);
void duoiTrai(int [][105], int, int, int, int);
int d = 1, a[105][105];

void trenPhai(int a[][105], int cd, int cc, int hd, int hc)
{
	for (int j = cd; j <= cc; j++)
	{
		a[hd][j] = d++;
	}
	for (int i = hd + 1; i <= hc; i++)
	{
		a[i][cc] = d++;
	}
	if (cc - cd > 0 && hc - hd > 0) {
		cc--;
		hd++;
		duoiTrai(a, cd, cc, hd, hc);
	}
}

void duoiTrai(int a[][105], int cd, int cc, int hd, int hc)
{
	for (int j = cc; j >= cd; j--)
	{
		a[hc][j] = d++;
	}
	for (int i = hc - 1; i >= hd; i--)
	{
		a[i][cd] = d++;
	}
	if (cc - cd > 0 && hc - hd > 0) {
		cd++;
		hc--;
		trenPhai(a, cd, cc, hd, hc);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	trenPhai(a, 0, n-1, 0, n-1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
