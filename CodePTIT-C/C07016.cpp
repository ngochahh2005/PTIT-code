#include <stdio.h>
#include <string.h>

struct danhSach{
	int ma;
	char name[1005], birth[1005];
	float score;
};

int main() {
	int n;
	float a, b, c;
	scanf("%d", &n);
	struct danhSach ds[1005];
	for (int i = 0; i < n; i++) {
		getchar();
		ds[i].ma = i + 1;
		gets(ds[i].name);
		gets(ds[i].birth);
		scanf("%f%f%f", &a, &b, &c);
		ds[i].score = a + b + c;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[j].score > ds[i].score) {
				struct danhSach tmp = ds[i];
				ds[i] = ds[j];
				ds[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %s %s %.1f\n", ds[i].ma, ds[i].name, ds[i].birth, ds[i].score);
	}
}
