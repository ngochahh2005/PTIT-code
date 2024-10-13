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
        string s;
        cin >> s;
        int k;
        cin >> k;
        sort(s.begin(), s.end());
        s.resize(unique(s.begin(), s.end()) - s.begin());
        if (26 - s.size() <= k) cout << "1\n";
        else cout << "0\n";
    }
}