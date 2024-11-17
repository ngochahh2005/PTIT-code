#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct data {
    int h, m, s;
    friend bool operator<(const data &a, const data &b) {
        if (a.h == b.h) {
            if (a.m == b.m) return a.s < b.s;
            return a.m < b.m;
        }
        return a.h < b.h;
    }
};
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    data a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].h >> a[i].m >> a[i].s;
    }
    sort(a, a+n);
    for (int i = 0; i < n; i++) cout << a[i].h << " "  << a[i].m << " " << a[i].s << "\n";
}