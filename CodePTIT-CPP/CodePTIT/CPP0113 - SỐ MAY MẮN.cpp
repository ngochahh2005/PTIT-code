#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(int n) {
    if (n % 100 == 86) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << check(n) << "\n";
    }
}