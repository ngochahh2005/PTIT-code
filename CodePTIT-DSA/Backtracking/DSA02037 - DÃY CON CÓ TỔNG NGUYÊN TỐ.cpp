#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, a[20], s = 0;
vector<int> v;
vector< vector<int> > rs;

bool check(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void Try(int i) {
    for (int j = i; j < n; j++) {
        v.push_back(a[j]);
        s += a[j];
        if (check(s)) rs.push_back(v);
        Try(j+1);
        v.pop_back();
        s -= a[j];
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        rs.clear();
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        Try(0);
        sort(rs.begin(), rs.end());
        for (auto vec : rs) {
            for (int x : vec) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}