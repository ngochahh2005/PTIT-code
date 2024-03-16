#include <stdio.h>
#include <string.h>

struct dathuc{
	int cs, mu;
};

int bSearch(struct dathuc a[], int l, int r, int x) {
	int mid = (l+r)/2;
	if (a[mid].mu == x) return mid;
	if (a[mid].mu < x) return bSearch(a, mid, r, x);
	if (a[mid].mu > x) return bSearch(a, l, mid, x);
	return -1; 
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char s1[10005], s2[10005];
		gets(s1);
		gets(s2);
		struct dathuc a[10005], b[10005];
		int n1 = 0, n2 = 0;
		char *tok = strtok(s1, " ");
		while (tok != NULL) {
			int l = strlen(tok);
			int base = 0, exp = 0, kt = 0;
			if (tok[0] >= '0' && tok[0] <= '9') {
				for (int i = 0; i < l; i++) {
					if (tok[i] >= '0' && tok[i] <= '9') {
						if (kt == 0) {
							base = base*10 + tok[i] - '0';
						} else {
							exp = exp*10 + tok[i] - '0';
						} 
					} else kt = 1;
				}
				a[n1].cs = base;
				a[n1++].mu = exp; 
			}
			tok = strtok(NULL, " ");
		}
		tok = strtok(s2, " ");
		while (tok != NULL) {
			int l = strlen(tok);
			int base = 0, exp = 0, kt = 0;
			if (tok[0] >= '0' && tok[0] <= '9') {
				for (int i = 0; i < l; i++) {
					if (tok[i] >= '0' && tok[i] <= '9') {
						if (kt == 0) {
							base = base*10 + tok[i] - '0';
						} else {
							exp = exp*10 + tok[i] - '0';
						} 
					} else kt = 1;
				}
				b[n2].cs = base;
				b[n2++].mu = exp; 
			}
			tok = strtok(NULL, " ");
		}
		for (int i = 0; i < n2; i++) {
			printf("%d	%d\n", b[i].cs, b[i].mu);
		}
	}
}
