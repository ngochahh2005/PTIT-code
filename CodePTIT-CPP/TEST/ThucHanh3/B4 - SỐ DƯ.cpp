#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 1; i <= k; i++) {
        if (mp[n % i] != 0) {
            cout << "No"; 
            return 0;
        }
        mp[n % i]++;
    }
    cout << "Yes";
    // if (k == n && k == 1) cout << "Yes";
    // else if (k / n >= 1) cout << "No";
    // else cout << "Yes";
}