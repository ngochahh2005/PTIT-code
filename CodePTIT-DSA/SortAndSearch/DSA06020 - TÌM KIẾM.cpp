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
        int n, x, tmp;
        cin >> n >> x;
        bool ck = false;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp == x) ck = true;
        }
        if (ck) cout << "1\n";
        else cout << "-1\n";
    }
}