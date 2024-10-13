#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int sumDg(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int don(int n) {
    if (n / 10 == 0) return n;
    return don(sumDg(n));
}

bool check(int n) {
    if (don(n) == 9) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += (s[i] - '0');
        }
        cout << check(sum) << "\n";
    }
}