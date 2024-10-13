#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n*2; j++) {
            if (j == n - i - 1|| j == n + i - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    for (int i = n-1; i > 0; i--) {
        for (int j = n*2; j > 0; j--) {
            if (j == n - i + 2|| j == n + i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}
