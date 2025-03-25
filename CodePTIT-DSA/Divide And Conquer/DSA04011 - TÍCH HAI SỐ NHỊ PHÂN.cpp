#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll chuyen(string s) {
    ll rs = 0;
    for (int i = 0; i < s.size(); i++) {
        rs = rs * 2 + (s[i] - '0');
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
        string s1, s2;
        cin >> s1 >> s2;
        cout << chuyen(s1) * chuyen(s2) << "\n";
    }
}