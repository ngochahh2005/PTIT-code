#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

bool check(string s) {
    stringstream ss(s);
    string w;
    int n = 0;
    int cnt = 0;
    while (getline(ss, w, '.')) {
        n = 0;
        cnt++;
        for  (int i = 0; i < w.length(); i++) {
            if (!isdigit(s[i])) return false;
            n = n * 10 + (w[i] - '0');
        }
        // cout << n << "\n";
        if (n < 0 || n > 255) return false;
    }
    if (cnt != 4) return false;
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
        stringstream ss(s);
        string w;
        int n;
        bool ck = check(s);
        if (ck) cout << "YES\n";
        else cout << "NO\n";
    }
}