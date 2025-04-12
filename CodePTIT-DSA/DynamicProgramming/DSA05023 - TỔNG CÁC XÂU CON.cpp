#include <bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll sum(string s) {
    int n = s.length();
    ll rs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string tmp = s.substr(i, j-i+1);
            rs += stoll(tmp);
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
        string s;
        cin >> s;
        cout << sum(s) << "\n";
    }
}