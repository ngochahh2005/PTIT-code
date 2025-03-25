#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        cin >> n;
        vector< pair<int, int> > v;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back({tmp, i});
        }
        sort(v.begin(), v.end(), cmp);
        int rs = INT_MIN;
        int ls = v[0].second;
        for (int i = 1; i < n; i++) {
            if (v[i].second - ls > rs) rs = v[i].second - ls;
            ls = min(ls, v[i].second);
        }
        cout << rs << "\n";
    }
}