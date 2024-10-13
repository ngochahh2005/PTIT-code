#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int tong(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            res += (s[i] - '0');
        }
    }
    return res;
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
        int sum = tong(s);
        sort(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) cout << s[i];
        }
        cout << sum << "\n";
    }
}