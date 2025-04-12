#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

void solve(int n) {
    queue<string> qu;
    qu.push("1");
    while (n--) {
        string s = qu.front(); qu.pop();
        cout << s << " ";
        qu.push(s + "0");
        qu.push(s + "1");
    }
    cout << "\n";
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
        solve(n);
    }
}