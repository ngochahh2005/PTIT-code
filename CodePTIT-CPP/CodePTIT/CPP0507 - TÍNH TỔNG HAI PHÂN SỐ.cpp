#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct PhanSo {
    ll t, m;
};

void nhap(PhanSo &a) {
    cin >> a.t >> a.m;
}

void in(PhanSo a) {
    cout << a.t << "/" << a.m;
}

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

void rutgon(PhanSo &a) {
    ll tmp = gcd(a.t, a.m);
    a.t = a.t / tmp;
    a.m = a.m / tmp;
}

PhanSo tong(PhanSo a, PhanSo b) {
    ll mc = lcm(a.m, b.m);
    PhanSo c;
    c.t = a.t * (mc / a.m) + b.t * (mc / b.m);
    c.m = mc;
    rutgon(c);
    return c;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    PhanSo p,q;
	nhap(p);
    nhap(q);
	PhanSo t = tong(p,q);
	in(t);
}