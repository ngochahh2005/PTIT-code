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
        int dd[200];
        fill(dd, dd+200, 0);
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            dd[str[i]]++;
        }
        for (int i = 0; i < str.length(); i++) {
            if (dd[str[i]] == 1) cout << str[i];
        }
        cout << "\n";
    }
}