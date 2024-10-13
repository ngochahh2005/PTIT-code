#include <bits/stdc++.h>
#define ll long long
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
        int l = s.length();
        while (true) {
            if (s.length() == 0) break;
            int i = s.find("100", 0);
            if (i != string::npos) {
                s.erase(i, 3);
            } else break;
        }
        if (l == s.length()) cout << "\n";
        else cout << l - s.length() << "\n";
    }
}