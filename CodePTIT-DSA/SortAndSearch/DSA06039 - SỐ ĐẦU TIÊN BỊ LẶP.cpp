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
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (mp.find(tmp) == mp.end()) v.push_back(tmp);
            mp[tmp]++;
        }
        bool ck = false;
        for (int x : v) {
            if (mp[x] > 1) {
                ck = true;
                cout << x << "\n";
                break;
            }
        }
        if (!ck) cout << "NO\n";
    }
}