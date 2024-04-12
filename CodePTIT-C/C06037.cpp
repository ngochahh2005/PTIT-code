#include <stdio.h>
#include <string.h>

struct kitu {
	int d, c;
};

int dd[55];

int main() {
	struct kitu kt[55];
	char str[55];
	gets(str);
	for (int i = 0; i < strlen(str); i++) {
		int x = str[i] - 'A';
		if (dd[x] == 0) {
			kt[x].d = i;
			dd[x]++;
		} else {
			kt[x].c = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (kt[i].d < kt[j].d && kt[i].c < kt[j].c && kt[i].c > kt[j].d) cnt++;
		}
	}
	printf("%d", cnt);
}
