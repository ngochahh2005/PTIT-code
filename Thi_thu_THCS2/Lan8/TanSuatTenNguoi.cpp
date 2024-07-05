#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DanhSach {
	char nm[1005];
	int f;
} ds;

int cmp(const void *a, const void *b) {
	ds *x = (ds*)a;
	ds *y = (ds*)b;
	return strcmp(x->nm, y->nm);
}

int find(ds a[], int n, char *s) {
	for (int i = 0; i < n; i++) {
		if (strcmp(s, a[i].nm) == 0) {
			a[i].f++;
			return 1;
		}
	}
	return 0;
}

int main() {
	char str[1005]; 
	ds a[1005];
	int n = 0;
	while (gets(str) != NULL){
		if (find(a, n, str) == 0) {
			a[n].f++;
			strcpy(a[n++].nm, str);
		}
	}
	qsort(a, n, sizeof(ds), cmp);
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", a[i].nm, a[i].f);
	}
}
