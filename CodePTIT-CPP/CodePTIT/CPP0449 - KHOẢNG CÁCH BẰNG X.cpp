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
        int n, x, tmp;
        cin >> n >> x;
        set<int> se;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            se.insert(tmp);
        }
        bool ck = false;
        for (auto a : se) {
            if (se.find(x+a) != se.end()) {
                cout << "1\n";
                ck = true;
                break;
            }
        }
        if (!ck) cout << "-1\n";
    }
}