#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        if ((s[l] - '0') % 2 != 0 || (s[r] - '0') % 2 != 0) return false;
        l++;
        r--;
    }
    return true;
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
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}