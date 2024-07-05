#include <stdio.h>
#include <string.h>

int check(char *s){
	int l = 0, r = strlen(s) - 1;
	while (l < r) {
		if (s[l++] != s[r--]) return 0;
	}
	return 1;
}

void xoa(char *str, int pos) {
	int l = strlen(str);
	for (int i = pos; i < l; i++) {
		str[i] = str[i+1];
	}
	str[l] = '\0';
}

int d[100005];
char s[1005][1005];

int main() {
	char str[100005];
	gets(str);
	int n = 0;
	char *tok = strtok(str, " ,.");
	while (tok != NULL) {
		if (!check(tok)) {
			tok = strtok(NULL, " ,.");
			continue;
		}
		int kt = 0;
		for (int i = 0; i < n; i++) {
			if (strcmp(s[i], tok) == 0) {
				kt = 1;
				d[i]++;
				break;
			}
		}
		if (kt == 0) {
			d[n]++;
			strcpy(s[n++], tok);
		}
		tok = strtok(NULL, " ,.");
	}
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", s[i], d[i]);
	}
}
