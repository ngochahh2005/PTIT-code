#include <stdio.h>
#include <string.h>

char str[10005];
int count[10005];
char s[100][10005];

void toLower(char *s1) {
	int l = strlen(s1);
	for (int i = 0; i < l; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			s1[i] = s1[i] + 'a' - 'A';
		}
	}
}

int main()
{
	gets(str);
	int cnt = 0, check;
	char *tok = strtok(str, " ");
	while (tok != NULL) {
		check = 0;
		toLower(tok);
		for (int i = 0; i < cnt; i++) {
			if (strcmp(s[i], tok) == 0) {
				check = 1;
				count[i]++;
				break;
			}
		}
		if (check == 0) {
			count[cnt]++;
			strcpy(s[cnt++], tok);
		}
		tok = strtok(NULL, " ");
	}
	for (int i = 0; i < cnt; i++) {
		printf("%s %d\n", s[i], count[i]);
	}
}
