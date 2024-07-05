#include <stdio.h>
#include <string.h>

int cnt[10];
void solve(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        cnt[str[i] - '0']++;
    }
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '2' && str[i] != '3' && str[i] != '5' && str[i] != '7') continue;
        if (cnt[str[i] - '0'] == 0) continue;
        printf("%c %d\n", str[i], cnt[str[i] - '0']);
        cnt[str[i] - '0'] = 0;
    }
}

int main() {
	char str[25];
    gets(str);
    solve(str);
}
