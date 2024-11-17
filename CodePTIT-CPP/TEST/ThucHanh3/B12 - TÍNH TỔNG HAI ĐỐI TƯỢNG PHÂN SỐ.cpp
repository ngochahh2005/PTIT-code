#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
class PhanSo {
private: 
    ll t, m;
    void rg() {
        ll uc = __gcd(t, m);
        t /= uc;
        m /= uc;
    }
public: 
    PhanSo (ll t, ll m) : t(t), m(m) {}
    friend PhanSo operator+(PhanSo a, PhanSo b) {
        PhanSo c(1, 1);
        a.rg();
        b.rg();
        c.m = a.m / __gcd(a.m, b.m) * b.m;
        c.t = c.m / a.m * a.t + c.m / b.m * b.t;
        c.rg();
        return c;
    }
    friend istream &operator>>(istream &is, PhanSo &a) {
        is >> a.t >> a.m;
        return is;
    }
    friend ostream &operator<<(ostream &os, const PhanSo &a) {
        os << a.t << "/" << a.m;
        return os;
    }
};
  
int main() {
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
    cout << p + q;
	return 0;
}