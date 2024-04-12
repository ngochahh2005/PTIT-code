#include <stdio.h>
#include <string.h>

void tron(char s1[], char s2[], int n, char *str) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        str[cnt++] = s2[i];
        str[cnt++] = s1[i];
    }
    str[cnt] = '\0';
}

void tach(char s1[], char s2[], int n, char *str) {
    int cnt = 0;
    for (int i = 0; i < n; i++) s1[i] = str[cnt++];
    for (int i = 0; i < n; i++) s2[i] = str[cnt++];
}

int solve(int n) {
    char s1[n+5], s2[n+5], s[2*n+5], str[2*n+5];
    scanf("%s%s%s", s1, s2, s);
    char l[n+5], r[n+5];
    strcpy(l, s1);
    strcpy(r, s2);
    int cnt = 0;
    while (1) {
        cnt++;
        tron(s1, s2, n, str);
        if (strcmp(s, str) == 0) return cnt;
        tach(s1, s2, n, str);
        if (strcmp(s1, l) == 0 && strcmp(s2, r) == 0) break;
    }
    return -1;
}

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", solve(n));
    }
}
