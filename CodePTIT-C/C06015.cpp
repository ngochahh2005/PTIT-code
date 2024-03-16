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

void strUpper(char *str) {
	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 'a' + 'A';
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
	while (t--) {
		char ho[50], ten[55];
		scanf("%s", ho);
		gets(ten);
		strUpper(ho);
		strLower(ten);
		int check = 0, l = strlen(ten);
		for (int i = 0; i < l; i++) {
			if (ten[i] == ' ' && check == 0) continue;
			if (ten[i] >= 'a' && ten[i] <= 'z') {
				if (check == 0) {
					printf("%c", toUpper(ten[i]));
					check = 1;
				}
				else if(ten[i-1] == ' ') printf("%c", toUpper(ten[i]));
				else printf("%c", ten[i]);
			} else {
				if (ten[i] == ten[i+1] || i == l-1) continue;
				printf("%c", ten[i]);
			}
		}
		printf(", %s\n", ho);
	}
}
