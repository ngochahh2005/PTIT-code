#include <stdio.h>
#include <string.h>

int count(char str[]) {
	int l = 0, r = strlen(str) - 1, cnt = 0;
	while (l <= r) {
		if (l == r && cnt == 0) cnt = 1;
		if (str[l] != str[r]) cnt++;
		l++;
		r--;
	}
	return cnt;
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char str[25];
		gets(str);
		if (count(str) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
