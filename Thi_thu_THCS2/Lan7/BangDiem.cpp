#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct hocSinh{
	double tb, d[15];
	int id;
	char nm[105], xl[105];
} hs;

int cmp(const void *a, const void *b) {
	hs *x = (hs*)a;
	hs *y = (hs*)b;
	if (x->tb != y->tb) {
		if (x->tb < y->tb) return 1;
		else return -1;
	}
	return x->id > y->id;
}

int main() {
	int n;
	scanf("%d", &n);
	hs a[n+5];
	
	for (int i = 0; i < n; i++) {
		a[i].id = i+1;
		scanf("\n");
		gets(a[i].nm);
		double d = 0, t = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%lf", &a[i].d[j]);
			t += a[i].d[j];
		}
		a[i].tb = t / 10;
		if (a[i].tb >= 9.0) strcpy(a[i].xl, "XUAT SAC");
		else if (a[i].tb >= 8.0) strcpy(a[i].xl, "GIOI");
		else if (a[i].tb >= 7.0) strcpy(a[i].xl, "KHA");
		else if (a[i].tb >= 5.0) strcpy(a[i].xl, "TB");
		else strcpy(a[i].xl, "YEU");
	}
	qsort(a, n, sizeof(hs), cmp);
	for (int i = 0; i < n; i++) {
		if (a[i].id < 10) printf("HS0%d ", a[i].id);
		else printf("HS%d ", a[i].id);
		printf("%s %.1lf %s\n", a[i].nm, a[i].tb, a[i].xl);
	}
}

