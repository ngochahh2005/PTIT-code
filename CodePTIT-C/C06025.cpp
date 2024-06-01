#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void reverse(char *str) {
    int l = 0, r = strlen(str) - 1;
    while (l <= r) {
        swap(&str[l], &str[r]);
        l++;
        r--;
    }
}

char *sub(char *s1, char *s2) {
    static char res[1005];
    int i = strlen(s1) - 1, j = strlen(s2) - 1;
    int s = 0, nho = 0, n = 0;
    while (i >= 0 || j >= 0) {
        s = nho;
        if (i >= 0) s += s1[i--] - '0';
        if (j >= 0) s -= s2[j--] - '0';
        if (s < 0) {
            s += 10;
            nho = -1;
        } else nho = 0;
        if (s == 0 && j < 0 && i < 0) continue;
        res[n++] = s + '0';
    }
    res[n] = '\0';
    reverse(res);
    return res;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s1[1005], s2[1005];
        scanf("%s %s", s1, s2);
		if (strlen(s1) > strlen(s2) || strcmp(s1, s2) > 0) printf("%s\n", sub(s1, s2));
		else printf("%s\n", sub(s2, s1));
    }
}
