#include <stdio.h>

int gcd(int a, int b) {
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a/gcd(a,b)*b;
}

int main() {
	int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d ", a[0]);
        for (int i = 1; i < n; i++) {
            printf("%d ", lcm(a[i], a[i-1]));
        }
        printf("%d\n", a[n-1]);
    }
}
