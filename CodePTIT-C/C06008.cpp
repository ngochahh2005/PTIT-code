#include <stdio.h>
#include <string.h>

int main()
{
	char str[105];
	gets(str);
	char *ch = strtok(str, " ");
	char s[105][105];
	int cnt = 0, check = 0;
	while (ch != NULL) {
		check = 0;
		for (int i = 0; i < cnt; i++) {
			if (strcmp(ch, s[i]) == 0) {
				check = 1;
				break;
			}
		}
		if (check == 0) {
			strcpy(s[cnt], ch);
			cnt++;
		}
		ch = strtok(NULL, " ");
	}
	for (int i = 0; i < cnt; i++) {
		printf("%s ", s[i]);
	}
}
