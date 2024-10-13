#include <bits/stdc++.h>
#define ll long long
#define lmt 10000
using namespace std;

bool sang[lmt+5];
int res[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    res[1] = 1;
    for (int i = 2; i <= 100; i++) {
        if (!sang[i]) continue;
        res[i] = i; 
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
            if (res[j] == 0) res[j] = i;
        }
    }
    for (int i = 101; i <= lmt; i++) {
        if (res[i] == 0) res[i] = i;
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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}