#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool chanLe(string s) {
    if ((s[s.length() - 1] - '0') % 2 == 0)
        return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string w;
        int even = 0, odd = 0, cnt = 0;
        while (ss >> w) {
            cnt++;
            if (chanLe(w)) even++;
            else odd++;
        }
        if ((cnt % 2 == 0 && even > odd) || (cnt % 2 != 0 && odd > even)) cout << "YES\n";
        else cout << "NO\n";
    }
}