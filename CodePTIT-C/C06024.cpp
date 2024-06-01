#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void reverse(char *str) {
    int l = 0, r = strlen(str)-1;
    while (l <= r) {
        swap(&str[l], &str[r]);
        l++;
        r--;
    }
}

char *add(char *s1, char *s2) {
    static char res[505];
    int i = strlen(s1) - 1, j = strlen(s2) - 1;
    int n = 0, nho = 0;
    while (i >= 0 || j >= 0 || nho > 0) {
        int s = nho;
        if (i >= 0) s += s1[i--] - '0';
        if (j >= 0) s += s2[j--] - '0';
        res[n++] = s % 10 + '0';
        nho = s / 10;
    }
    res[n] = '\0';
    reverse(res);
    return res;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s1[505], s2[505];
        scanf("%s %s", s1, s2);
        printf("%s\n", add(s1, s2));
    }
}
