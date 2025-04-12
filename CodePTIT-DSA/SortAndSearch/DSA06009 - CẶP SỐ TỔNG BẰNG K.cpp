#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int count(vector<int> v, int n, int k) {
    int cnt = 0, l = 0, r = 0, t = 0, p = 0;
    bool dd[1005];
    fill(dd, dd+1005, false);
    for (int i = 0; i < n; i++) {
        if (dd[v[i]] || dd[k-v[i]]) continue;
        l = lower_bound(v.begin(), v.end(), k-v[i]) - v.begin();
        r = upper_bound(v.begin(), v.end(), k-v[i]) - v.begin();
        if (l == r) continue;
        dd[v[i]] = dd[k-v[i]] = true;
        if (v[i] == k-v[i]) {
            cnt += (r-l) * (r-l-1) / 2;
        } else {
            t = lower_bound(v.begin(), v.end(), v[i]) - v.begin();
            p = upper_bound(v.begin(), v.end(), v[i]) - v.begin();
            cnt += ((r-l) * (p-t));
        }
        // cout << v[i] << " + " << k-v[i] << " = " << k << " : " << l << " - " << r << "\n"; 
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, tmp;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        cout << count(v, n, k) << "\n";
    }
}