#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void luckyNb(int n) {
    queue<string> qu;
    qu.push("6");
    qu.push("8");
    vector<string> rs;
    int l = 0;
    for (int i = 1; i <= n; i++) {
        l += (1 << i);
    }
    while (rs.size() < l) {
        string a = qu.front(); qu.pop();
        string b = qu.front(); qu.pop();
        rs.push_back(a);
        rs.push_back(b);
        qu.push(a + "6");
        qu.push(a + "8");
        qu.push(b + "6");
        qu.push(b + "8");
    }
    for (int i = l - 1; i >= 0; i--) cout << rs[i] << " ";
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
        luckyNb(n);
    }
}