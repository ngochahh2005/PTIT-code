#include <stdio.h>
#include <string.h>

void toLower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}

int main()
{
	char str[55], s1[55], s2[55];
	gets(str);
	toLower(str);
	int n = 0;
	char *tok = strtok(str, " ");
	while (tok != NULL) {
		s1[n++] = tok[0];
		strcpy(s2, tok);
		tok = strtok(NULL, " ");
	}
	for (int i = 0; i < n - 1; i++) printf("%c", s1[i]);
	printf("%s@ptit.edu.vn", s2);
}
