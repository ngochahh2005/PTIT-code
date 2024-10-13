#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int s[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp, pos = -1;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            s[i] = s[i-1] + tmp;
        }
        for (int i = 1; i <= n; i++) {
            if (s[i-1] == s[n] - s[i]) {
                pos = i;
                break;
            }
        } 
        cout << pos << "\n";
    }
}