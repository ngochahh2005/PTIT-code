#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str, s[105];
    int n = 0;
    while (cin >> str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0] = toupper(str[0]);
        s[n++] = str;
    }
    for (int i = 0; i < n-1; i++) {
        if (i == 0) cout << s[i];
        else cout << " " << s[i];
    }
    transform(s[n-1].begin(), s[n-1].end(), s[n-1].begin(), ::toupper);
    cout << ", " << s[n-1];

}