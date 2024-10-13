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
        int l = s.length(), cnt = 1;
        for (int i = 0; i < l; i++) {
            if (s[i] != s[i+1]) {
                cout << s[i] << cnt;
                cnt = 1;
            } else cnt++;
        }
        cout << "\n";
    }
}