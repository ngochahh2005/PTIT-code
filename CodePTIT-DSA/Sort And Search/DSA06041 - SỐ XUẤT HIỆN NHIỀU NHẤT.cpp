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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        int ma = 0;
        for (auto x : mp) {
            if (x.second > n/2 && x.second > mp[ma]) ma = x.first;
        }
        if (ma == 0) cout << "NO\n";
        else cout << ma << "\n";
    }
}