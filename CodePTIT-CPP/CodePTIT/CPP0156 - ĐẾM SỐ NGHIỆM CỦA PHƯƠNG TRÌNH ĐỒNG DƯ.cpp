#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int solve(int b, int p) {
    if (b < 1) return 0;
    if (b == 1) return 1;
    int d = b / p;
    vector<int> a;
    for (int i = 1; i <= p; i++) {
        if (((ll)i*i) % p == 1) a.push_back(i);
    }
    d *= a.size();
    int t = b % p;
    for (auto x : a) {
        if (t >= x) d++;
        else break;
    }
    return d;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int b, p;
        cin >> b >> p;
        cout << solve(b, p) << "\n";
    }
}