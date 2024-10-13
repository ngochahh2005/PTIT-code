#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        ll cnt = str.length();
        int l = str.length();
        int dd[30];
        fill(dd, dd+30, 0);
        for (int i = 0; i < l; i++) {
            dd[str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (dd[i] > 1) cnt += (ll)dd[i] * (dd[i]-1) / 2;
        }
        cout << cnt << "\n";
    }
}