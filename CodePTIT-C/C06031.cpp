#include <stdio.h>
#include <string.h>

int max (int a, int b) {
    return (a > b) ? a : b;
}

int f[55];

int main() {
    char str[55];
    gets(str);
    int n = strlen(str), ma = 0;
    for (int i = 0; i < n; i++) {
        f[i] = 1;
        for (int j = 0; j < i; j++) {
            if (str[i] > str[j] && f[j] >= f[i]) {
                f[i] = f[j] + 1;
            }
        }
        ma = max(ma, f[i]);
    }
    printf("%d", 26 - ma);
}