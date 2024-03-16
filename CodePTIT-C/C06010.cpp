#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	char temp[10];
	fgets(temp, sizeof(temp), stdin);
	while (t--) {
		char ch[505];
		fgets(ch, sizeof(ch), stdin);
		int left = 0, right = strlen(ch)-2, kt = 1;
		while (left <= right) {
			if (ch[left] != ch[right]) {
				kt = 0;
				break;
			} else {
				int n = ch[left] - '0';
				if (n % 2 != 0) {
					kt = 0;
					break;
				} 
			}
			left++;
			right--;
		}
		if (kt == 1) printf("YES\n");
		else printf("NO\n");
	}
}
