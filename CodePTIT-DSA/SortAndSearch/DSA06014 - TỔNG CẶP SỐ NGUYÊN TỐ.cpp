#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool sang[lmt+5];
vector<int> pr;
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 1000; i++) {
        if (!sang[i]) continue;
        pr.push_back(i);
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
        }
    }
    for (int i = 1001; i <= lmt; i++) {
        if (sang[i]) pr.push_back(i);
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
        int x = upper_bound(pr.begin(), pr.end(), n/2) - pr.begin();
        bool ck = false;
        for (int i = 0; i < x; i++) {
            if (sang[n - pr[i]]) {
                cout << pr[i] << " " << n-pr[i] << "\n";
                ck = true;
                break;
            }
        }
        if (!ck) cout << "-1\n";
    }
}