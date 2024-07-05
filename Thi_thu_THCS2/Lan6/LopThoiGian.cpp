#include <stdio.h>

typedef struct thoiGian {
	int h, m, s;
} time;

void swap(time *a, time *b) {
	time c = *a;
	*a = *b;
	*b = c;
}

void sort(time a[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n; j++) {
			if (a[i].h > a[j].h) swap(&a[i], &a[j]);
			else if (a[i].h == a[j].h) {
				if (a[i].m > a[j].m) swap(&a[i], &a[j]);
				else if (a[i].m == a[j].m) {
					if (a[i].s > a[j].s) swap(&a[i], &a[j]);
				}
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	time a[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a[i].h, &a[i].m, &a[i].s);
	}
	sort(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", a[i].h, a[i].m, a[i].s);
	}
}
