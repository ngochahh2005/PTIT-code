#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char *s){
    int cnt = 0, l = strlen(s);
    for (int i = 0; i < l; i++) {
        if (!isalpha(s[i]) && !isdigit(s[i]) && s[i] != '@' && s[i] != '.' && s[i] != '_') return 0;
        if (s[i] == '@') cnt++;
        if (cnt > 1) return 0;
        if (s[i] == '@') {
            char tmp[1005];
            strncpy(tmp, s + i, l - i + 1);
            tmp[l-i+1] = '\0';
            if (strcmp(tmp, "@gmail.com") != 0 && strcmp(tmp, "@28tech.com.vn") != 0 && strcmp(tmp, "@yahoo.com") != 0 && strcmp(tmp, "@hotmail.com") != 0) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();
    char s[1005];
    while (T--) {
        gets(s);
        if (check(s) == 0) printf("NO\n");
        else printf("YES\n");
    }
}