#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int greedy(int n) {
    int cnt = 0;
    for (int i = 9; i >= 0; i--) {
        while (n >= coins[i]) {
            n -= coins[i];
            cnt++;
        }
    }
    return cnt;
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
        cout << greedy(n) << "\n";
    }
}