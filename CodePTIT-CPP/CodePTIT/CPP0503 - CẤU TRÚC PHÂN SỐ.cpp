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

void rutgon(PhanSo &a) {
    ll tmp = gcd(a.t, a.m);
    a.t = a.t / tmp;
    a.m = a.m / tmp;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
}