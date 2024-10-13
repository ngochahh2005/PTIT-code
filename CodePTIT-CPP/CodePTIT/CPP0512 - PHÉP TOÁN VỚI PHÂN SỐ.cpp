#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct PhanSo {
    ll tu, mau;

    void rutgon() {
        ll ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }
};

PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo c;
    ll mc = a.mau/__gcd(a.mau, b.mau)*b.mau;
    c.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
    c.mau = mc * mc;
    c.tu *= c.tu;
    c.rutgon();
    return c;
}

PhanSo nhan(PhanSo a, PhanSo b, PhanSo c) {
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    d.rutgon();
    return d;
}

void process(PhanSo a, PhanSo b) {
    PhanSo c = cong(a, b);
    PhanSo d = nhan(a, b, c);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
	cin >> t;
    while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}