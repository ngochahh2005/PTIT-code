#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct daGiac {
    double x, y;
    friend istream &operator>>(istream &is, daGiac &a) {
        is >> a.x >> a.y;
        return is;
    }
};

double tinh(daGiac a, daGiac b) {
    return a.x * b.y - a.y * b.x;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        daGiac a[n + 5];
        for (int i = 0; i < n; i++) cin >> a[i];
        double s = 0;
        a[n] = a[0];
        for (int i = 1; i <= n; i++) {
            s += tinh(a[i-1], a[i]);
        }
        s /= 2;
        cout << fixed << setprecision(3) << s << "\n";
    }
}