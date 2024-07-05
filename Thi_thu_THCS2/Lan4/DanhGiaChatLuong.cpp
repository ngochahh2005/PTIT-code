#include <stdio.h>
#include <string.h>

typedef struct word {
	char dt[105];
	int f = 0;	
} w;

int check(char *str) {
	if (strcmp(str, "good") == 0 || strcmp(str, "bad") == 0 || strcmp(str, "wonderful") == 0 || strcmp(str, "terrible") == 0)
		return 1;
	return 0;
}

void swap(w *a, w *b) {
	w t = *a;
	*a = *b;
	*b = t;
}

int main() {
	char s[105];
	int n = 0;
	w a[1005];
	while (scanf("%s", s) != -1) {
		if (check(s) == 0) continue;
		// printf("%s\n", s);
		int kt = 0;
		for (int i = 0; i < n; i++) {
			if (strcmp(s, a[i].dt) == 0) {
				a[i].f++;
				kt = 1;
				// printf("%s\n", s);
				break;
			}
		}
		if (kt == 0) {
			a[n].f++;
			// printf("%s\n", s);
			strcpy(a[n++].dt, s);
		} 
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i].f < a[j].f) swap(&a[i], &a[j]);
			else if (a[i].f == a[j].f && strcmp(a[i].dt, a[j].dt) > 0) swap(&a[i], &a[j]);
		}
	}
	for (int i = 0; i < n; i++) printf("%s %d\n", a[i].dt, a[i].f);
}
