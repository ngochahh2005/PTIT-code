#include <stdio.h>

typedef struct phanSo{
    int t, m;
} ps;

int gcd(int a, int b) {
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a/gcd(a,b)*b;
}

ps rutGon(ps p) {
    ps tmp;
    tmp.t = p.t / gcd(p.t, p.m);
    tmp.m = p.m / gcd(p.t, p.m);
    return tmp;
}

ps quyDong(ps p, ps q) {
    ps tmp;
    p = rutGon(p);
    q = rutGon(q);
    tmp.m = lcm(p.m, q.m);
    tmp.t = p.t * (tmp.m / p.m);
    return tmp;
}

ps tong(ps p, ps q) {
    ps tmp;
    tmp.t = p.t + q.t;
    tmp.m = p.m;
    tmp = rutGon(tmp);
    return tmp;
}

ps thuong(ps p, ps q) {
    ps tmp;
    tmp.t = p.t* q.m;
    tmp.m = q.t * p.m;
    tmp = rutGon(tmp);
    return tmp;
}

int main() {
    int t;
    ps p, q;
    scanf("%d", &t);
    for (int o = 1; o <= t; o++) {
        scanf("%d %d %d %d", &p.t, &p.m, &q.t, &q.m);
        printf("Case #%d:\n", o);
        p = quyDong(p, q);
        q = quyDong(q, p);
        ps tmp;
        tmp = tong(p, q);
        printf("%d/%d %d/%d\n", p.t, p.m, q.t, q.m);
        printf("%d/%d\n", tmp.t, tmp.m);
        tmp = thuong(p, q);
        printf("%d/%d\n", tmp.t, tmp. m);
    }
}
