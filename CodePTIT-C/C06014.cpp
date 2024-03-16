#include <stdio.h>
#include <string.h>

void strLower(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}

char toUpper(char str) {
	return str + 'A' - 'a';
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char str[105];
		gets(str);
		strLower(str);
		int check = 0, l = strlen(str);
		for (int i = 0; i < l; i++) {
			if (str[i] == ' ' && check == 0) continue;
			if (str[i] >= 'a' && str[i] <= 'z') { 
				if (check == 0) {
					printf("%c", toUpper(str[i]));
					check = 1;
				} 
				else if (str[i-1] == ' ') printf("%c", toUpper(str[i]));
				else printf("%c", str[i]);
			} else {
				if (str[i] == ' ' && str[i+1] == ' ') continue;
				else printf("%c", str[i]);
			}
			
		}
		printf("\n");
	}
}
