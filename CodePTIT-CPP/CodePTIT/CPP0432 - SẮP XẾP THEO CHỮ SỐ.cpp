#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

bool cmp(string a, string b) {
    return a+b > b+a;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        sort(s, s+n, cmp);
        for (int i = 0; i < n; i++) cout << s[i];
        cout << "\n";
    }
}