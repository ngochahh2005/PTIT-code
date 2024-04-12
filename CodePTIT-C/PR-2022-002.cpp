#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n < 2) return 0;
    int i, can = sqrt(n);
    for (i = 2; i <= can; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int xoay(int n) {
    int a[20], cnt = 0;
    while (n > 0) {
        a[cnt++] = n % 10;
        n /= 10;
    }
    int s = 0;
    for (int i = cnt-2; i >= 0; i--) {
        s = s*10 + a[i];
    }
    s = s*10 + a[cnt-1];
    return s;
}

int check (int n) {
    if (n < 10) return isPrime(n);
    else {
        int x = n;
        if (isPrime(n) == 0) return 0;
        while (x != xoay(n)) {
            // printf("%d\n", xoay(n));
            n = xoay(n);
            if (isPrime(n) == 0) return 0;
        }
        return 1;
    }
}

int main() {
	int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d", check(n));
        if (t != 0) printf(" ");
    }
}
