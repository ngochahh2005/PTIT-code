#include <stdio.h>

int check(char s[][505], int c, int h) {
    int c2 = 0, c8 = 0, ct = 0, ce = 0, cc = 0, ch = 0;
    for (int i = h; i < h+3; i++) {
        for (int j = c; j < c+3; j++) {
            switch (s[i][j]) {
                case '2':
                    c2++;
                    break;
                case '8':
                    c8++;
                    break;
                case 't':
                    ct++;
                    break;
                case 'e':
                    ce++;
                    break;
                case 'c':
                    cc++;
                    break;
                case 'h':
                    ch++;
                    break;
                default :
                  break;
            }
        }
    }
    if (c2 > 0 && c8 > 0 && ct > 0 && ce > 0 && cc > 0 && ch > 0) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    char s[505][505];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &s[i][j]);
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
                s[i][j] = s[i][j] - 'A' + 'a';
        }
    }
    int kt = 0;
    for (int i = 0; i <= n-3; i++) {
        for (int j = 0; j <= n-3; j++) {
            if(check(s, j, i) == 1) {
                kt = 1;
                break;
            }
        }
        if (kt == 1) break;
    }
    if (kt == 1) printf("28tech");
    else printf("29tech");
}