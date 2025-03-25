#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string gray(string s) {
    string rs;
    rs += s[0];
    int n = s.size();
    for (int i = 1; i < n; i++) {
        char c = (((s[i] - '0') ^ (rs[i-1] - '0')) + '0');
        rs += c;
    }
    return rs;
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
        cout << gray(s) << "\n";
    }
}