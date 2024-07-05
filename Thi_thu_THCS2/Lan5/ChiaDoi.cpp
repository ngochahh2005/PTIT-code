#include <stdio.h>
#include <math.h>
#define lmt 1000000

int sang[lmt+5], a[10];
void sangnt() {
    sang[0] = sang[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        if (sang[i] == 1) continue;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = 1;
        }
    }
}

int cs(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int mu(int cnt) {
    int s = 1;
    for (int i = 0; i < cnt; i++) {
        s *= 10;
    }
    return s;
}

int tach(int x) {
	int cnt = cs(x);
    int l, r;
    if (cnt % 2 == 0) l = x / mu(cnt/2);
    else l = x / mu(cnt/2 + 1);
    r = x % mu(cnt/2);
    return l+r;
}

int check(int x) {
    if (x < 10) return 0;
    if (sang[tach(x)] == 0) return 1;
    return 0;
}

int main() {
    int k;
    sangnt();
    scanf("%d", &k);
    for (int i = 10; i < k; i++) {
        if (check(i)) printf("%d ", i);
    }
}
