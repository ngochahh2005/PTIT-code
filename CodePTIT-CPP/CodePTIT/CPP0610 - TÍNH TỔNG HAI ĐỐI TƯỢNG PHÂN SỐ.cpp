#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class PhanSo {
    private:
        ll t, m;
    public:
        PhanSo(ll t, ll m) : t(t), m(m) {}
        friend PhanSo operator+(PhanSo a, PhanSo b) {
            ll tu, mau;
            mau = a.m * b.m;
            tu = a.t * b.m + b.t * a.m;
            PhanSo c(tu, mau);
            ll tmp = __gcd(c.t, c.m);
            c.t /= tmp;
            c.m /= tmp;
            return c;
        }
        friend istream& operator>>(istream& is, PhanSo& a) {
            is >> a.t >> a.m;
            return is;
        }
        friend ostream& operator<<(ostream& os, const PhanSo& a) {
            os << a.t << "/" << a.m;
            return os;
        }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}