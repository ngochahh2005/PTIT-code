#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        double n;
        cin >> n;
        if (n < 4.5) cout << "-1\n";
        else if (n == 4.5) cout << "7\n";
        else if (n == 5.0) cout << "8\n";
        else if (n == 5.5) cout << "9\n";
        else cout << "10\n";
    }
}