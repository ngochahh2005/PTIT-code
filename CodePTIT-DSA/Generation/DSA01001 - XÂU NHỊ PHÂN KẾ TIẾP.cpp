#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void sinh(string s) {
    int n = s.size();
    int i = n - 1;
    while (s[i] == '1' && i >= 0) i--;
    if (i < 0) {
        for (int j = 0; j < n; j++) cout << 0;
        cout << "\n";
        return;
    }
    s[i] = '1';
    for (int j = i+1; j < n; j++) s[j] = '0';
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
        sinh(s);
    }
}