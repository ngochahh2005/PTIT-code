#include <stdio.h>

struct sinhVien {
	int id;
	char name[105];
	float d1, d2, d3, d;
};

struct sinhVien sv[1005];
char str[105];
void firstChoice(int n) {
	for (int i = 1; i <= n; i++) {
		sv[i].id = i;
		getchar();
		gets(sv[i].name);
		scanf("%f%f%f", &sv[i].d1, &sv[i].d2, &sv[i].d3);
		sv[i].d = sv[i].d1 + sv[i].d2 + sv[i].d3;
//		printf("%.1f	%.1f	%.1f\n", sv[i].d1, sv[i].d2, sv[i].d3);
	}
	printf("%d\n", n);
}

void secondChoice(int msv) {
	getchar();
	gets(sv[msv].name);
	scanf("%f%f%f", &sv[msv].d1, &sv[msv].d2, &sv[msv].d3);
	sv[msv].d = sv[msv].d1 + sv[msv].d2 + sv[msv].d3;
	printf("%d\n", msv);
}

void thirdChoice(int n) {
	for (int i = 1; i <= n-1; i++) {
		for (int j = i+1; j <= n; j++) {
			if (sv[i].d > sv[j].d) {
				struct sinhVien tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d %s %.1f %.1f %.1f\n", sv[i].id, sv[i].name, sv[i].d1, sv[i].d2, sv[i].d3);
	}
}

int main() {
	int n, choice;
	while (1) {
		scanf("%d", &choice);
		if (choice == 1) {
			scanf("%d", &n);
			firstChoice(n);
		} else if (choice == 2) {
			int msv;
			scanf("%d", &msv);
			secondChoice(msv);
		} else {
			thirdChoice(n);
			return 0;
		}
	} 
}
