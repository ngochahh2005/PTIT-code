#include <stdio.h>
#include <math.h>

struct tamGiac {
	int a, b, c;
	double s;
};

double dienTich(int a, int b, int c) {
	double p = (double)(a+b+c)/2;
	return sqrt((double)p*(p-a)*(p-b)*(p-c));
}

void xuat(struct tamGiac tg) {
	printf("%d %d %d\n", tg.a, tg.b, tg.c);
}

int main() {
	int n;
	scanf("%d", &n);
	struct tamGiac tg[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tg[i].a, &tg[i].b, &tg[i].c);
		tg[i].s = dienTich(tg[i].a, tg[i].b, tg[i].c); 
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (tg[i].s > tg[j].s) {
				struct tamGiac tmp = tg[i];
				tg[i] = tg[j];
				tg[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		xuat(tg[i]);
	}
} 
