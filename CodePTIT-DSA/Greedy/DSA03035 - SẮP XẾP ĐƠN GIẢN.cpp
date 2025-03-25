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
    int n, tmp;
    cin >> n;
    vector< pair<int,int> > vp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vp.push_back({tmp, i});
    }
    sort(vp.begin(), vp.end(), cmp);
    int cnt = 0, rs = 0;
    for (int i = 0; i < n-1; i++) {
        if (vp[i].second < vp[i+1].second) {
            if (cnt == 0) cnt++;
            cnt++;
        } else {
            rs = max(rs, cnt);
            cnt = 0;
        }
    }
    rs = max(rs, cnt);
    cout << n - rs;
}