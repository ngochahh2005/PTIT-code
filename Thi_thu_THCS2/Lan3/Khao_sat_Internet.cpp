#include <stdio.h>
#include <string.h>

typedef struct truycap {
	char d[105], tm[105], w[105];
	int f = 0;
} tc;

void swap(char *a, char *b) {
	char tmp[105];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
}

void swapDg(int *a, int *b) {
	int t = *a;
	*a = * b;
	*b = t;
}

int main() {
	tc a[1005];
	char ngay[105], gio[105], web[105];
	int n = 0;
	while (scanf("%s%s%s", ngay, gio, web) != -1) {
		int kt = 0;
		for (int i = 0; i < n; i++) {
			if (strcmp(a[i].w, web) == 0) {
				kt = 1;
				a[i].f++;
				break;
			}
		}
		if (kt == 0) {
			strcpy(a[n++].w, web);
			a[n-1].f++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i].f < a[j].f) {
				swap(a[i].w, a[j].w);
				swapDg(&a[i].f, &a[j].f);
			} else if (a[i].f == a[j].f && strcmp(a[i].w, a[j].w) > 0) {
				swap(a[i].w, a[j].w);
				swapDg(&a[i].f, &a[j].f);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", a[i].w, a[i].f);
	}
}
