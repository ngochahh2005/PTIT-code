#include <stdio.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int check(char *s) {
    int l = strlen(s);
    if (s[0] != s[l-1]) return 0;
    for (int i = 0; i < l-1; i++) {
        if (abs(s[i] - s[i+1]) != 2) return 0;
    }
    return 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) swap(&a, &b);
    char s[10];
    int kt = 0;
    for (int i = a; i <= b; i++) {
        sprintf(s, "%d", i);
        if (check(s) == 1) {
            printf("%s ", s);
            kt = 1;
        }
    }
    if (kt == 0) printf("28tech");
}
