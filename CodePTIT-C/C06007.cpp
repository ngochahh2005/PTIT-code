#include <stdio.h>
#include <string.h>

int main()
{
	char s1[105], s2[105];
	gets(s1);
	gets(s2);
	char *ch = strtok(s1, " ");
	while (ch != NULL) {
		if (strcmp(ch, s2) != 0) printf("%s ", ch);
		ch = strtok(NULL, " ");
	}
}
