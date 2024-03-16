#include <stdio.h>
#include <string.h>

struct danhSach{
	int mmh;
	char tmh[100], nh[100];
	double ln;
};

struct danhSach ds[1005];

void Sort(int n) {
	int i, j;
	struct danhSach tmp;
	
	for (i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[j].ln > ds[i].ln) {
				tmp = ds[i];
				ds[i] = ds[j];
				ds[j] = tmp;
			}
		}
	}
} 

int main()
{
	int n;
	double gm, gb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar(); 
		ds[i].mmh = i + 1;
		gets(ds[i].tmh);
		gets(ds[i].nh);
		scanf("%lf%lf", &gm, &gb); 
		ds[i].ln = gb - gm;
	}
	Sort(n);
	for (int i = 0; i < n; i++) {
		printf("%d %s %s %.2lf\n", ds[i].mmh, ds[i].tmh, ds[i].nh, ds[i].ln);
	}
}
