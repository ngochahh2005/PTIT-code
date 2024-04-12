#include <stdio.h>
#include <string.h>

void xoay(char str[]) {
    char c = str[0], l = strlen(str);
    for (int i = 1; i < l; i++) {
        str[i-1] = str[i];
    }
    str[l-1] = c;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
	int n;
    scanf("%d", &n);
    char str[55][55];
    getchar();
    for (int i = 0; i < n; i++) {
        gets(str[i]);
        // printf("%s\n", str[i]);
    }
    char s[55], tmp[55];
    strcpy(s, str[0]);
    int l = strlen(s), mi = 1e9, check = 1;
    for (int i = 0; i < l; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            strcpy(tmp, str[j]);
            int k;
            for (k = 0; k < l; k++) {
                if (strcmp(s, tmp) == 0) {
                    cnt += k;
                    break;
                }
                printf("%s  %s  %d\n", tmp, s, k);
                xoay(tmp);
            }
            if (k == l) {
                check = 0;
                break;
            }
        }
        printf("%d\n", cnt);
        mi = min(mi, cnt);
        if (check == 0) break;
        xoay(s);
    }
    if (check == 0) printf("-1");
    else printf("%d", mi);
}
