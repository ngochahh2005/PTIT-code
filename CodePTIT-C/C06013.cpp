#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		char str[1000];
		scanf("%s", &str);
		int dd[11];
		for (int i = 0; i < 10; i++) dd[i] = 0;
		if (str[0] == '0') printf("INVALID\n");
		else {
			int l = strlen(str), cnt = 0, check = 1;
			for (int i = 0; i < l; i++) {
				if (str[i] >= '0' && str[i] <= '9') {
					int t = str[i] - '0';
					if (dd[t] == 0) {
						cnt++;
						dd[t]++;
					}
				} else {
					check = 0;
					break;
				}
			}
			if (check == 0) printf("INVALID\n");
			else {
				if (cnt == 10) printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}
