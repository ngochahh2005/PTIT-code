#include <stdio.h>
#include <>

struct sinhVien {
	int id;
	char name[105];
	float d1, d2, d3, d;
	
	void firstChoice(sinhVien sv[]) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			getchar();
			gets(sv[i].name);
			scanf("%f%f%f", &sv[i].d1, &sv[i].d2, &sv[i].d3);
			sv[i].d = sv[i].d1 + sv[i].d2 + sv[i].d3;
		}
		printf("%d\n", n);
	}
	
	void secondChoice(sinhVien sv[]) {
		int msv;
		scanf("%d", &msv);
		getchar();
		gets(sv[msv].name);
		scanf("%f%f%f", &sv[msv].d1, &sv[msv].d2, &sv[msv].d3);
		printf("%d\n", msv);
	}
	
	void thirdChoice(sinhVien sv[]) {
		for (int i = 1; i <= n; i++) {
			printf("%d %s %f %f %f\n", sv[i].id, sv[i].name, sv[i].d1)
		}
	}
};

int main() {
	
}
