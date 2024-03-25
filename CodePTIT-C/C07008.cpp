#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char s1[10005], s2[10005];
		gets(s1);
		gets(s2);
		int bac = 0, hs = 0;
		int f[10005];
		for (int i = 0; i < 10001; i++) f[i] = 0;
		char *tok = strtok(s1, " ");
		while (tok != NULL) {
			int check = 0;
			if (strcmp(tok, "+") == 0) {
				tok = strtok(NULL, " ");
				continue;
			}
			for (int i = 0; i < strlen(tok); i++) {
				if (isdigit(tok[i])) {
					if (check == 0) {
						hs = hs*10 + tok[i]-'0';
					} else {
						bac = bac*10 + tok[i]-'0';
					}
				} else check = 1;
			}
			f[bac] = hs;
			// printf("%d	%d\n", bac, hs);
			bac = 0;
			hs = 0;
			tok = strtok(NULL, " ");
		}
		tok = strtok(s2, " ");
		while (tok != NULL) {
			int check = 0;
			if (strcmp(tok, "+") == 0) {
				tok = strtok(NULL, " ");
				continue;
			}
			for (int i = 0; i < strlen(tok); i++) {
				if (isdigit(tok[i])) {
					if (check == 0) {
						hs = hs*10 + tok[i]-'0';
					} else {
						bac = bac*10 + tok[i]-'0';
					}
				} else check = 1;
			}
			f[bac] += hs;
			bac = 0;
			hs = 0;
			tok = strtok(NULL, " ");
		}
		int check = 0;
		for (int i = 10000; i >= 0; i--) {
			if (f[i] != 0) {
				if (check == 0) check = 1;
				else printf(" + ");
				printf("%d*x^%d", f[i], i);
			}
		}
		printf("\n");
	}
}
