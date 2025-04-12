#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int len[20];
vector<string> rs;

void chieuDai() {
    len[1] = 2;
    for (int i = 2; i < 15; i++) {
        len[i] = len[i-1] + (1 << i);
    }
}
  
void luckyNb() {
    queue<string> qu;
    qu.push("6");
    qu.push("8");
    while (rs.size() < len[14]) {
        string tmp = qu.front(); qu.pop();
        rs.push_back(tmp);
        qu.push(tmp + "6");
        qu.push(tmp + "8");
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    chieuDai();
    luckyNb();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << len[n] << "\n";
        for (int i = 0; i < len[n]; i++) {
            cout << rs[i] << " ";
        }
        cout << "\n";
    }
}