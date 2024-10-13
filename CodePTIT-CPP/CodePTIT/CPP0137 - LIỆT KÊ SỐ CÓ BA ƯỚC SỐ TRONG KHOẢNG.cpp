#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
using namespace std;

bool pr[lmt+5];
void prime() {
    fill(pr, pr+lmt+5, true);
    pr[0] = pr[1] = false;
    for (int i = 2; i <= 1000; i++) {
        if (!pr[i]) continue;
        for (int j = i*i; j <= lmt; j+=i) {
            pr[j] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        int cnt = 0;
        int d = ceil(sqrt((double)l)), c = sqrt(r);
        for (int i = d; i <= c; i++) {
            if (pr[i]) cnt++;
        }
        cout << cnt << "\n";
    }
}