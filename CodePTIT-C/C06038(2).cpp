#include <stdio.h>
#include <string.h>

int dd1[15], dd2[15];

int check(char *str, int l) {
    for (int i = 2; i <= l; i++) {
        for (int j = 0; j < 10; j++) dd2[j] = 0;
        int nho = 0, t = 0;
        for (int j = l-1; j >= 0; j--) {
            t = (str[j] - '0') * i + nho;
            // printf("%d", t % 10);
            dd2[t % 10]++;
            nho = t / 10;
        }
        // printf("\n");
        if (nho > 0) dd2[nho]++;
        for (int j = 0; j < 10; j++) {
            if (dd1[j] != dd2[j]) return 0;
        }
    }
    
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        for (int i = 0; i < 10; i++) dd1[i] = 0;
        char str[65];
        gets(str);
        int l = strlen(str);
        for (int i = 0; i < l; i++) {
            dd1[str[i] - '0']++;
        }
        if (check(str, l) == 0) printf("NO\n");
        else printf("YES\n");
    }
}