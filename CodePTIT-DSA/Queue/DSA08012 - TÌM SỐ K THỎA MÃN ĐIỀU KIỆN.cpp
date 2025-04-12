#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<int> rs;

void Find() {
    queue<int> qu;
    qu.push(0);
    while (true) {
        int tmp = qu.front(); qu.pop();
        rs.push_back(tmp);
        if (tmp >= 1e5) return;
        vector<bool> dg(6, false);
        bool ck = true;
        if (tmp == 0) dg[0] = true;
        else {
            int n = tmp;
            while (n > 0) {
                if (dg[n % 10]) {
                    ck = false;
                    break;
                }
                dg[n % 10] = true;
                n /= 10;
            }
        }
        if (!ck) continue;
        for (int i = 0; i < 6; i++) {
            if (!dg[i]) {
                int x = tmp * 10 + i;
                qu.push(x);
            }
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Find();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int a = lower_bound(rs.begin(), rs.end(), l) - rs.begin();
        int b = upper_bound(rs.begin(), rs.end(), r) - rs.begin();
        cout << b - a << "\n";
    }
}
