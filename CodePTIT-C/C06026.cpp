#include <stdio.h>
#include <string.h>

int check(char *str) {
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		if (str[l] != str[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	char str[1005][1005], s[1005];
	int cnt[1005], ma = 0, n = 0;
	for (int i = 0; i < 1005; i++) cnt[i] = 0;
	while (scanf("%s", s) != -1) {
		if (check(s) == 1) {
			ma = max(ma, strlen(s));
			int kt = 0;
			for (int i = 0; i < n; i++) {
				if (strcmp(str[i], s) == 0) {
					cnt[i]++;
					kt = 1;
					break;
				}
			}
			if (kt == 0) {
				cnt[n]++;
				strcpy(str[n++], s);
			}
		}
	}
	// printf("%d\n", ma);
	for (int i = 0; i < n; i++) {
		if (ma == strlen(str[i])) {
			printf("%s %d\n", str[i], cnt[i]);
		}
	}
}
