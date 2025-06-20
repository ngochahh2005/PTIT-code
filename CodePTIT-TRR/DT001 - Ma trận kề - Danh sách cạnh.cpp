#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    int t;
    cin >> t;
    if (t == 1) {
        int n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                cin >> tmp;
                if (tmp) cnt++;
            }
            cout << cnt << " ";
        } 
    } else {
        int n, tmp;
        cin >> n;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> tmp;
                if (tmp && j > i) vp.push_back({i+1, j+1});
            }
        }
        cout << n << " " << vp.size() << "\n";
        for (auto x : vp) cout << x.first << " " << x.second << "\n";
    }
}