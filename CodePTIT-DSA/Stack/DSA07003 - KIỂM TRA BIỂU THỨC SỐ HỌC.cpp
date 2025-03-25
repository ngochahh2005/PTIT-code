#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void check(string s) {
    int c1 = 0, c2 = 0;
    for (char c : s) {
        if (c == '+' || c == '-') c1++;
        if (c == '(') c2++;
    }
    if (c1 != c2) cout << "Yes\n";
    else cout << "No\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        check(s);
    }
}