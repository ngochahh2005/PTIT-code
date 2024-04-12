#include <stdio.h>
#include <string.h>

void xoay(char *str) {
    char c = str[0];
    for (int i = 0; i < strlen(str) - 1; i++) {
        str[i] = str[i+1];
    }
    str[strlen(str) - 1] = c;
}

int check(char *s[], int n, char *str) {
    for (int i = 0; i < n; i++) {
        if (strcmp(s[i], str) == 0) return 1;
    }
    return 0;
}

void reverse(char *str) {
    int l = 0, r = strlen(str) - 1;
    while (l <= r) {
        char tmp = str[l];
        str[l] = str[r];
        str[r] = tmp;
        l++;
        r--;
    }
}

char mul(char *str, int k, char *res) {
    int l = strlen(str), nho = 0, cnt = 0, x = 0;
    for (int i = l - 1; i >= 0; i--) {
        x = (str[i] - '0') * k + nho;
        nho = x / 10;
        x %= 10;;
        res[cnt++] = x + '0';
    }
    if (nho > 0) res[cnt++] = nho + '0';
    res[cnt] = '\0';
    reverse(res);
}

int solve() {
    char str[65];
    gets(str);
    char s[65][65], tmp[65];
    strcpy(tmp, str);
    int cnt = 0;
    xoay(tmp);
    while (strcmp(str, tmp) != 0) {
        strcpy(s[cnt++], tmp);
        xoay(tmp);
    }
    for (int i = 2; i <= strlen(str); i++) {
        mul(str, i, tmp);
        int check = 0;
        for (int j = 0; j < cnt; j++) {
            if (strcmp(tmp, s[j]) == 0) {
                check = 1;
                break;
            }
        }
        if (check == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        if (solve() == 0) printf("NO\n");
        else printf("YES\n");
    }
}