#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	char s[205];
	fgets(s, sizeof(s), stdin);
	while (t--) {
		char str[205];
		fgets(str, sizeof(str), stdin);
		int n = strlen(str), count = 0;
		for (int i = 0; i < n - 2; i++) {
			if (str[i] != ' ' && str[i+1] == ' ')
				count++;
		}
		if (str[n-2] != ' ') count++;
		printf("%d\n", count);
	}
}
