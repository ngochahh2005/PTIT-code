#include <stdio.h>
#include <string.h>

int main() {
	char str[100005];
	gets(str);
	char s[100005];
	int n = 0;
	s[n] = str[strlen(str)-1];
	for (int i = strlen(str)-2; i >= 0; i--) {
		if (str[i] >= s[n]) {
//			printf("%c	%c	%d\n", str[i], s[n], n);
			s[++n] = str[i];
		}
	}
	for (int i = n; i >= 0; i--) printf("%c", s[i]);
} 
