#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int l, r;

class dn {
private:
    string id, nm;
    int sl;
public:
    friend istream &operator>>(istream &is, dn &a) {
        is >> a.id;
        scanf("\n");
        getline(is, a.nm);
        is >> a.sl;
        return is;
    }
    friend ostream &operator<<(ostream &os, dn &a) {
        if (a.sl >= l && a.sl <= r) 
        os << a.id << " " << a.nm << " " << a.sl << "\n";
        return os;
    }
    friend bool operator<(const dn &a, const dn &b) {
        if (a.sl == b.sl) return a.id < b.id;
        return a.sl > b.sl;
    }
};
  
int main() {
    int n, q;
    cin >> n;
    dn a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> q;
    for (int i = 0; i < n; i++) cout << a[i];
    while (q--) {
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for (int i = 0; i < n; i++) {
            cout << a[i];
        }
    }
}
