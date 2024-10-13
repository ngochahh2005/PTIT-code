#include <bits/stdc++.h>
#define ll long long
#define lmt 100000
using namespace std;

bool sang[lmt+5];
int res[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 316; i++) {
        if (!sang[i]) continue;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
        }
    }
    for (int i = 2; i <= lmt; i++) {
        if (!sang[i]) res[i] = res[i-1];
        else res[i] = res[i-1] + 1;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << res[r] - res[l-1] << "\n";
    }
}