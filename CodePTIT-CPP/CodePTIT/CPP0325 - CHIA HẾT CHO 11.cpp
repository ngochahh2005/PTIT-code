#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string s) {
    int even = 0, odd = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) even += s[i] - '0';
        else odd += s[i] - '0';
    }
    if ((even - odd) % 11 == 0) return true;
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
        cout << check(s) << "\n";
    }

}