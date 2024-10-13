#include <bits/stdc++.h>
#define ll long long
#define lmt 100000
using namespace std;

bool sang[lmt+5];
int pr[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 316; i++) {
        if (!sang[i]) continue;
        pr[i] = i;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
            pr[j] = i;
        }
    }
    for (int i = 317; i <= lmt; i++) {
        if (sang[i]) pr[i] = i;
    }
}

int sumDg(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool check(int n) {
    if (n < 2) return false;
    int s1 = sumDg(n), s2 = 0;
    while (n > 1) {
        s2 += sumDg(pr[n]);
        n /= pr[n];
    }
    // cout << s1 << " " << s2 << "\n";
    if (s1 == s2) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (!sang[n] && check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}