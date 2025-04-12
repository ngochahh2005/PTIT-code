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
        int n, m, tmp;
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        int k = n+m;
        sort(a.begin(), a.end());
        for (int i = 0; i < k; i++) cout << a[i] << " ";
        cout << "\n";
    }
}