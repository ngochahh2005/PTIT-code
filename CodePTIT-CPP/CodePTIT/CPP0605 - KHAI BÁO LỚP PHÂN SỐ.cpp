#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class PhanSo {
    private:
        ll t, m;
        ll gcd(ll a, ll b) {
            if (a < b) swap(a, b);
            if (b == 0) return a;
            return gcd(b, a%b);
        }
    public:
        PhanSo(ll t, ll m) : t(t), m(m) {}
        friend istream& operator>>(istream& is, PhanSo& a) {
            is >> a.t >> a.m;
            return is;
        }
        friend ostream& operator<<(ostream& os, PhanSo& a) {
            os << a.t << "/" << a.m;
            return os;
        }
        void rutgon() {
            ll tmp = gcd(t, m);
            t = t/tmp;
            m = m/tmp;
        }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
}