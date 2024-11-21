#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k, x, tmp;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a.emplace_back(tmp);
        }
        cin >> k >> x;
        sort(a.begin(), a.end());
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        // cout << idx << "\n";
        for (int i = idx - k/2; i < idx; i++) cout << a[i] << " ";
        for (int i = idx + 1; i <= idx + k/2; i++) cout << a[i] << " ";
        cout << "\n";
        a.clear();
    }
}