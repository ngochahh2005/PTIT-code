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
        int k;
        string s;
        cin >> s >> k;
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int d = 0;
            int dd[256] = {0};
            for (int j = i; j < n; j++) {
                if (dd[s[j]] == 0) {
                    dd[s[j]]++;
                    d++;
                } else dd[s[j]]++;
                if (d == k) cnt++;
                else if (d > k) break;
            }
        }
        cout << cnt << "\n";
    }
}