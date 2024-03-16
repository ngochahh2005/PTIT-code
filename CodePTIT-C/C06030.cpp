#include <stdio.h>
#include <string.h>

int cnt[1005];

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	char str[1005][1005], s[1005];
	int ma = 0, n = 0;
	while (scanf("%s", s) != -1) {
		int check = 0;
		if (ma <= strlen(s)) {
			ma = strlen(s);
			for (int i = 0; i < n; i++) {
				if (strcmp(s, str[i]) == 0) {
					check = 1;
					cnt[i]++;
					break;
				}
			}
			if (check == 0) {
				cnt[n]++;
				strcpy(str[n++], s);
			}
		}
	}
	// for (int i = 0; i < n; i++) printf("%s %d\n", str[i], cnt[i]);
	for (int i = 0; i < n; i++) {
		if (ma == strlen(str[i])) {
			printf("%s %d %d\n", str[i], ma, cnt[i]);
		}
	}
}
