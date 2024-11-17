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
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}