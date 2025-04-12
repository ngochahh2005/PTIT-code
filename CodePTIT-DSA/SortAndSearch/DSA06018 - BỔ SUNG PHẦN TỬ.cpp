#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            se.insert(tmp);
        }
        int mi = INT_MAX, ma = 0;
        for (auto x : se) {
            mi = min(mi, x);
            ma = x;
        }
        cout << ma - mi + 1 - se.size() << "\n";
    }
}