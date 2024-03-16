#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char str1[205], str2[205];
		char s1[205][205], s2[205][205];
		gets(str1);
		gets(str2);
		int l1 = 0, l2 = 0;
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
//				printf("%s\n", tok);
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
					char tmp[205] = {};
					strcpy(tmp, s1[j]);
					strcpy(s1[j], s1[j+1]);
					strcpy(s1[j+1], tmp);
				}
			}
		}
		for (int i = 0; i < l1; i++) {
			printf("%s ", s1[i]);
		}
		printf("\n");
	}
}
