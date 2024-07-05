#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuan(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char str[105], s[105][105];
	for (int i = 0; i < n; i++) {
		gets(str);
		chuan(str);
		char *tok = strtok(str, " ");
		int n = 0;
		while (tok != NULL) {
			strcpy(s[n++], tok);
			tok = strtok(NULL, " ");
		}
		printf("%s", s[n-1]);
		for (int i = 0; i < n-1; i++) {
			printf("%s", s[i]);
		}
		printf("@28tech.com.vn\n");
	}
}
