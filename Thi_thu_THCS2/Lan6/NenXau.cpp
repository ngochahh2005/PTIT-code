#include <stdio.h>
#include <string.h>

char str[1000005];

int main() {
	gets(str);
	int l = strlen(str), f = 1;
	for (int i = 0; i < l; i++) {
		if (str[i] != str[i+1]) {
			printf("%c%d", str[i], f);
			f = 1;	
		} else f++;
	}
}
