#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int m;
		scanf("%d", &m);
		char str[15][15];
		for (int i = 0; i < m; i++) {
			scanf("%s", &str[i]);
		}
		int num = sizeof(str) / sizeof(str[0]);
		qsort(str, num, sizeof(char *), cmp);
		for (int i = 0; i < m; i++) {
			printf("%s", str[i]);
		}
		printf("\n");
	}
} 
