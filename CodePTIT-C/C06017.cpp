#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str1[105], str2[105];
	char s1[105][105], s2[105][105];
	gets(str1);
	int l1 = 0, l2 = 0;
	gets(str2);
	char *tok = strtok(str2, " ");
	while (tok != NULL) {
		strcpy(s2[l2++], tok);
		tok = strtok(NULL, " ");
	}
	tok = strtok(str1, " ");
	while (tok != NULL) {
		int check = 0;
		for (int i = 0; i < l2; i++) {
			if (strcmp(tok, s2[i]) == 0) {
				check = 1;
				break;
			}
		}
		if (check == 0) {
			for (int i = 0; i < l1; i++) {
				if (strcmp(tok, s1[i]) == 0) {
					check = 1;
					break;
				}
			}
			if (check == 0) {
				strcpy(s1[l1++], tok);
			}
		}
		tok = strtok(NULL, " ");
	}
	for (int i = 1; i < l1; i++) {
		for (int j = 0; j < i; j++) {
			if (strcmp(s1[j], s1[j+1]) > 0) {
				char tmp[105] = {};
				strcpy(tmp, s1[j]);
				strcpy(s1[j], s1[j+1]);
				strcpy(s1[j+1], tmp);
			}
		}
	}
	for (int i = 0; i < l1; i++) {
		printf("%s ", s1[i]);
	}
}
