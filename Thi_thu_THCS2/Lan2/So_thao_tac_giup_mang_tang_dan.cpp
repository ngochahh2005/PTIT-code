#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int t = a[0];
    long long s = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > t) t = a[i];
        else {
            s += t - a[i] + 1;
            t++;
        }
        // printf("%d  %d  %d\n", i, t, s);
    }
    printf("%lld", s);
}