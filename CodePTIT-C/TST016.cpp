#include <stdio.h>
#include <string.h>

int cnt[1000005];
char str[1000005];

int check() {
	if (cnt['('] != cnt[')']) return 0;
	if (cnt['['] != cnt[']']) return 0;
	if (cnt['{'] != cnt['}']) return 0;
	if (cnt['\''] % 2 != 0) return 0;
	if (cnt['"'] % 2 != 0) return 0;
	return 1; 
}

int main()
{
	gets(str);
	for (int i = 0; i < strlen(str); i++) {
		cnt[str[i]]++;
	}
	printf("%d", check());
}
