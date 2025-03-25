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
        int st, ed;
        vector< pair<int, int> > vp;
        for (int i = 0; i < n; i++) {
            cin >> st >> ed;
            vp.push_back({st, ed});
        }
        sort(vp.begin(), vp.end(), cmp);
        ed = 0;
        int rs = 1;
        for (int i = 1; i < n; i++) {
            if (vp[i].first >= vp[ed].second) {
                rs++;
                ed = i;
            }
        }
        cout << rs << "\n";
    }
}