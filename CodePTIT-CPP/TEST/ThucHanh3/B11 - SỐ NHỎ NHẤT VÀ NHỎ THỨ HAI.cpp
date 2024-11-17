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
        int n, tmp;
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            se.insert(tmp);
        }
        if (se.size() == 1) cout << "-1\n";
        else {
            vector<int> v;
            int d = 0;
            for (auto x : se) {
                cout << x << " ";
                d++;
                if (d == 2) break;
            }
            cout << "\n";
        }
    }
}