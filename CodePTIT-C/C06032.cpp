#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char a[15], char b[15]) {
	char s1[30], s2[30];
	strcpy(s1, a);
	strcat(s1, b);
	strcpy(s2, b);
	strcat(s2, a);
	if (strcmp(s1, s2) >= 0) return 1;
	return 0;
} 

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		char str[15][15];
		for (int i = 0; i < n; i++) {
			scanf("%s", &str[i]);
		}
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				if (check(str[i], str[j]) == 1) {
					char tmp[15];
					strcpy(tmp, str[i]);
					strcpy(str[i], str[j]);
					strcpy(str[j], tmp);
				}
			}
		} 
		for (int i = 0; i < n; i++) {
			printf("%s", str[i]);
		}
		printf("\n");
	}
} 
