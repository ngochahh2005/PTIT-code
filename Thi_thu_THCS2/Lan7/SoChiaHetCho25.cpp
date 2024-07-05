#include <stdio.h>
#include <string.h>

int check(char *str) {
	if (strcmp("0", str) == 0) return 1;
	int l = strlen(str);
	if (str[l-1] == '0' && str[l-2] == '0') return 1;
	int t = (str[l-2] - '0')*10 + (str[l-1] - '0');
	if (t % 25 == 0) return 1;
	return 0;
}

int main() {
	char str[1005];
	scanf("%s", str);
	if (check(str)) printf("YES");
	else printf("NO");
}
