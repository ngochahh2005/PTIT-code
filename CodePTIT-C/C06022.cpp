#include <stdio.h>
#include <string.h>
#include <ctype.h>

char toLower(char str) {
	if (str >= 'A' && str <= 'Z')
		return str + 'a' - 'A';
	else return str;
}

void strLower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 'a' - 'A';
		}
	}
} 

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for (int o = 1; o <= t; o++) {
		char s1[205], s2[25];
		gets(s1);
		gets(s2);
		strLower(s2);
		char *token = strtok(s1, " ");
		printf("Test %d: ", o);
		while (token != NULL) {
			char tmp[205];
			strcpy(tmp, token);
			strLower(token);
			if (strcmp(token, s2) != 0)
				printf("%s ", tmp);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
