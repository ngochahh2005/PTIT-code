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
        string s;
        cin >> s;
        int l = s.length() - 1;
        if (s[l] == '6' && s[l-1] == '8') cout << "YES\n";
        else cout << "NO\n";
    }
}