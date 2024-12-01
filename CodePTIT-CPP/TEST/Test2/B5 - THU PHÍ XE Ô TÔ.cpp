#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct data {
    string b, lx, h, d;
    ll g, dg;
    void donGia() {
        if (lx == "Xe_con") {
            if (g <= 5) dg = 10000;
            else dg = 15000;
        } else if (lx == "Xe_khach") {
            if (g <= 29) dg = 50000;
            else dg = 70000;
        } else dg = 20000;
    }
};
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    data a[n];
    set<string> se;
    for (int i = 0; i < n; i++) {
        cin >> a[i].b >> a[i].lx >> a[i].g >> a[i].h >> a[i].d;
        a[i].donGia();
        se.insert(a[i].d);
    }
    for (auto x : se) {
        ll s = 0;
        for (int i = 0; i < n; i++) {
            if (x == a[i].d && a[i].h == "IN") {
                s += a[i].dg;
            }
        }
        cout << x << ": " << s << "\n";
    }
}