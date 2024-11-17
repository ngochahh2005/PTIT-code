#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct PhanSo {
    ll t, m;
};

void nhap(PhanSo &a) {
    cin >> a.t >> a.m;
}

void rutgon(PhanSo &a) {
    ll uc = __gcd(a.t, a.m);
    a.t /= uc;
    a.m /= uc;
}

void in(PhanSo a) {
    cout << a.t << "/" << a.m;
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo c;
    rutgon(a);
    rutgon(b);
    c.m = a.m / __gcd(a.m, b.m) * b.m;
    c.t = c.m / a.m * a.t + c.m / b.m * b.t;
    rutgon(c);
    return c;
}
  
int main() {
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}