#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		char str[1005];
		scanf("%s", &str);
		if (str[0] == '0') printf("INVALID\n");
		else {
			int l = strlen(str), check = 1, dl = 0, dc = 0;
			for (int i = 0; i < l; i++) {
				if (str[i] < '0' || str[i] > '9') {
					check = 0;
					break;
				} else {
					int x = str[i] - '0';
					if (x % 2 == 0) dc++;
					else dl++;
				}
			}
			if (check == 0) printf("INVALID\n");
			else {
				if ((l % 2 == 0 && dc > dl) || (l % 2 != 0 && dl > dc)) 
					printf("YES\n");
				else printf("NO\n");
			} 
		}
	}
}
