#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class NhanVien {
    private:
        string id, nm, gt, bd, dc, t, d;
    public:
        NhanVien() {
            id = "00001";
        }
        friend istream& operator>>(istream& is, NhanVien& a) {
            getline(is, a.nm);
            is >> a.gt >> a.bd;
            is.ignore();
            getline(is, a.dc);
            is >> a.t >> a.d;
            return is;
        }
        friend ostream& operator>>(ostream& os, NhanVien& a) {
            os << a.id << " " << a.nm << " " << a.gt << " " << a.bd << " " << a.dc << " " << a.t << " " << a.d;
            return os;
        }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    NhanVien a;
    cin >> a;
    cout >> a;
}