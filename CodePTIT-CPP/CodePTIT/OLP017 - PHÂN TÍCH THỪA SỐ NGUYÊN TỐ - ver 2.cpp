#include <bits/stdc++.h>
#define ll long long
#define lmt 10000000
#define mod 1000000007
using namespace std;

bool sang[lmt+5];
vector<ll> pr;

void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 3162; i++) {
        if (!sang[i]) continue;
        pr.push_back(i);
        for (int j = i*i; j <= lmt; j += i) {
            sang[j] = false;
        }
    }
    for (int i = 3163; i <= lmt; i++) {
        if (sang[i]) pr.push_back(i);
    }
}

void pt(ll n) {
    int i = 0, cnt = 0;
    while (pr[i] * pr[i] <= n) {
        while (n % pr[i] == 0) {
            n /= pr[i];
            cnt++;
        }
        if (cnt > 0) {
            cout << pr[i] << " " << cnt << "\n";
            cnt = 0;
        }
        i++;
    }
    if (n > 1) cout << n << " 1\n";
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sangnt();
    while (t--) {
        ll n;
        cin >> n;
        pt(n);
    }
}