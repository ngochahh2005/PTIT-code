#include <stdio.h>
#include <string.h>

typedef struct quanNet {
	char id[25], ps[35], nm[105], in[10], ou[10];
	int vao, ra, tm;
} gm;

int tg(char *s) {
	int gio = 0, p = 0, ck = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ':') {
			ck = 1;
			continue;
		}
		if (ck == 0) gio = gio * 10 + (s[i] - '0');
		else p = p * 10 + (s[i] - '0');
	}
	return gio * 60 + p;
}

void swap(gm *a, gm *b) {
	gm c = *a;
	*a = *b;
	*b = c;
}

int cmp(char *a, char *b) {
	char s1[205], s2[205];
	strcpy(s1, a);
	strcat(s1, b);
	strcpy(s2, b);
	strcat(s2, a);
	if (strcmp(s1, s2) > 0) return 1;
	return 0;
}

void sort(gm a[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].tm < a[j].tm) swap(&a[i], &a[j]);
			else if (a[i].tm == a[j].tm && cmp(a[i].id, a[j].id)) {
				swap(&a[i], &a[j]);
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	gm a[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%s %s", a[i].id, a[i].ps);
		getchar();
		gets(a[i].nm);
		scanf("%s %s", a[i].in, a[i].ou);
		a[i].vao = tg(a[i].in);
		a[i].ra = tg(a[i].ou);
		a[i].tm = a[i].ra - a[i].vao;
	}
	sort(a, n);
	for (int i = 0; i < n; i++) {
		printf("%s %s %s %d gio %d phut\n", a[i].id, a[i].ps, a[i].nm, a[i].tm / 60, a[i].tm % 60);
	}
}
