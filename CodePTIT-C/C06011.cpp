#include <stdio.h>
#include <string.h>

int check(char ch[]) {
	int left = 0, right = strlen(ch)-2, sum = 0;
	if (ch[left] - '0' != 8 || ch[right] - '0' != 8) return 0;
		while (left <= right) {
			if (ch[left] != ch[right]) {
				return 0;
			} 
			int n = ch[left] - '0';
			sum += n*2;
			left++;
			right--;
		}
	if (sum % 10 != 0) return 0;
	return 1;
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
		if (check(ch) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
