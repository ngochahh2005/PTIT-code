#include <stdio.h>
#include <string.h>

int snt[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};

int check(char ch[]) {
	int left = 0, right = strlen(ch) - 2;
	while (left <= right) {
		if (ch[left] != ch[right]) return 0;
		int n = ch[left] - '0';
		if (snt[n] == 0) return 0;
		left++;
		right--;
	}
	return 1;
}

void solve(char ch[]) {
	if (check(ch) == 0) printf("NO\n");
	else printf("YES\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	char temp[10];
	fgets(temp, sizeof(temp), stdin);
	while (t--) {
		char ch[505];
		fgets(ch, sizeof(ch), stdin);
		solve(ch);
	} 
}
