#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
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
        vector< pair<int, int> > v(n);
        for (int i = 0; i < n; i++) cin >> v[i].first;
        for (int i = 0; i < n; i++) cin >> v[i].second;
        sort(v.begin(), v.end(), cmp);
        int cnt = 1, ed = 0;
        for (int i = 1; i < n; i++) {
            if (v[i].first >= v[ed].second) {
                cnt++;
                ed = i;
            }
        }
        cout << cnt << "\n";
    }
}