#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return len1 - len2;
    }
    return strcmp(str1, str2);
}

int tach(char *s, char *str[]) {
    int cnt = 0;
    char *tok = strtok(s, " ");
    while (tok != NULL) {
        str[cnt] = tok;
        cnt++;
        tok = strtok(NULL, " ");
    }
    return cnt;
}

int main() {
    char s[10001];
    fgets(s, 10001, stdin);
    size_t len = strlen(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
    char *str[10000];
    int n = tach(s, str);

    qsort(str, n, sizeof(char *), compare);
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%s", str[i]);
    }
}

