#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue<string> qu;
    string c, s;
    int q;
    cin >> q;
    while (q--) {
        cin >> c;
        if (c == "PUSH") {
            cin >> s;
            qu.push(s);
        } else if (c == "PRINTFRONT") {
            if (qu.size()) cout << qu.front() << "\n";
            else cout << "NONE\n";
        } else {
            if (qu.size()) qu.pop();
        }
    }
}