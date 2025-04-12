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
        int n, c, x;
        cin >> n;
        queue<int> q;
        while (n--) {
            cin >> c;
            if (c == 1) {
                cout << q.size() << "\n";
            } else if (c == 2) {
                if (q.empty()) cout << "YES\n";
                else cout << "NO\n";
            } else if (c == 3) {
                cin >> x;
                q.push(x);
            } else if (c == 4) {
                if (q.size()) q.pop();
            } else if (c == 5) {
                if (q.size()) cout << q.front() << "\n";
                else cout << "-1\n";
            } else {
                if (q.size()) cout << q.back() << "\n";
                else cout << "-1\n";
            }
        }
    }
}