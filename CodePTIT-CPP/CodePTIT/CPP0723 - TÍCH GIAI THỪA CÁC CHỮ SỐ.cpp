#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void solve(string s, int n) {
    string res = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '4') res += "322";
        else if (s[i] == '6') res += "53";
        else if (s[i] == '8') res += "7222";
        else if (s[i] == '9') res += "7332";
        else if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') res += s[i];
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        solve(a, n);
    }
}