#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void solve(string s) {
    int l = s.length();
    int i = l - 2, j = i + 1;
    while (s[i] <= s[i+1]) i--;
    if (i < 0) {
        cout << "-1\n";
        return ;
    }
    while (s[j] >= s[i]) j--;
    while (s[j] == s[j-1]) j--;
    swap(s[i], s[j]);
    cout << s << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
} 
