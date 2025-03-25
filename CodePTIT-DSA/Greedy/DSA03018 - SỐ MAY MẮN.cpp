#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int n7 = n/7;
        bool ck = false;
        while (n7 >= 0) {
            int du = n - n7 * 7;
            if (du % 4 == 0) {
                int n4 = du / 4;
                ck = true;
                string rs = string(n4, '4') + string(n7, '7');
                cout << rs << "\n";
                break;
            }
            n7--;
        }
        if (!ck) cout << "-1\n";
    }
}