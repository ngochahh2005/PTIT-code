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
        int n, dg;
        string s;
        cin >> n;
        set<int> a;
        while (n--) {
            cin >> s;
            for (int i = 0; i < s.length(); i++) {
                dg = s[i] - '0';
                a.insert(dg);
            }
        }
        for (auto x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
}