#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    string s[105];
    int n = 0;
    while (cin >> str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        s[n++] = str;
    }
    cout << s[n-1];
    for (int i = 0; i < n-1; i++) {
        cout << s[i][0];
    }
    cout << "@ptit.edu.vn";
}