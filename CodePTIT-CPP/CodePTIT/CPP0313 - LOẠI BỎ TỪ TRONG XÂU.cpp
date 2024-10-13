#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    getline(cin, s1);
    cin >> s2;
    stringstream ss(s1);
    string w;
    while (ss >> w) {
        if (w != s2) cout << w << " ";
    }
}