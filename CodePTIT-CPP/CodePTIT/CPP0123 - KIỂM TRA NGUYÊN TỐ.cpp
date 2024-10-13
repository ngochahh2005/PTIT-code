#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(int n) {
    if (n < 2) return false;
    int can = (int)sqrt(n);
    for (int i = 2; i <= can; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
}