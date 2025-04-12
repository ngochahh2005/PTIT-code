#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll bdn(string s) {
    int i = 0, l =  s.length();
    for (; i < l; i++) {
        if (s[i] > '1') {
            break;
        }
    }
    for (int j = i; j < l; j++) s[j] = '1';
    ll rs = 0;
    for (i = 0; i < l; i++) {
        rs += (s[i] - '0') * ((ll)pow(2, l-i-1));
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
        cout << bdn(s) << "\n";
    }
}