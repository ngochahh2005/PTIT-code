#include <stdio.h>
#include <string.h>

char cam[105][105];
int n = 0;
void lower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}

int check(char *str) {
	lower(str);
	for (int i = 0; i < n; i++) {
		if (strstr(str, cam[i]) != NULL) return 0;
	}
	return 1;
}

int main() {
	char tmp[1005];
	gets(tmp);
	char *tok = strtok(tmp, ",");
	while (tok != NULL) {
		lower(tok);
		strcpy(cam[n++], tok);
		tok = strtok(NULL, ",");
	}
	while (gets(tmp) != NULL) {
		if (check(tmp)) printf("accept\n");
		else printf("block\n");
	}
}
