#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct NhanVien {
    string id, nm, gt, dc, t, d, bd;
};

void nhap(NhanVien &a) {
    a.id = "00001";
    getline(cin, a.nm);
    getline(cin, a.gt);
    getline(cin, a.bd);
    getline(cin, a.dc);
    getline(cin, a.t);
    getline(cin, a.d);
}

void in(NhanVien a) {
    cout << a.id << " " << a.nm << " " << a.gt << " " << a.bd << " " << a.dc << " " << a.t << " " << a.d;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct NhanVien a;
    nhap(a);
    in(a);
}