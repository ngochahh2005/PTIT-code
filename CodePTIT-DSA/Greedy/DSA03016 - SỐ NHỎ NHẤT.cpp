#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string minNumber(int s, int d) {
    string rs;
    rs.resize(d, '0');
    rs[0] = '1';
    if (s == 1) return rs;
    s--;
    while (d >= 0 && s > 0) {
        d--;
        if (d == 0 && s > 9) return "-1";
        if (s > 9) {
            s -= 9;
            rs[d] = '9';
        } else {
            rs[d] += s;
            s -= s;
        }
    }
    return rs;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        cout << minNumber(s, d) << "\n";
    }
}