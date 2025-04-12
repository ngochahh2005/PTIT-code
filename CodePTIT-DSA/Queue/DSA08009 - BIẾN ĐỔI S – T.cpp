#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool dd[lmt+5];

struct data {
    int vl, steps;
};

int change(int s, int t) {
    if (s >= t) return s - t;
    queue<data> qu;
    qu.push({s, 0});
    while (s != t) {
        data tmp = qu.front(); qu.pop();
        if (tmp.vl == 0 || dd[tmp.vl]) continue;
        if (tmp.vl == t) return tmp.steps;
        if (tmp.vl > t) qu.push({tmp.vl - 1, tmp.steps + 1});
        else {
            qu.push({tmp.vl * 2, tmp.steps + 1});
            qu.push({tmp.vl - 1, tmp.steps + 1});
        }
        dd[tmp.vl] = true;
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        fill(dd, dd+lmt+5, false);
        int s, t;
        cin >> s >> t;
        cout << change(s, t) << "\n";
    }
}