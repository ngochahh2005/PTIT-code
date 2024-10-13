#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s[1005];
        string tmp;
        getline(cin, tmp);
        stringstream ss(tmp);
        string w;
        int n = 0;
        while (ss >> w) {
            s[n++] = w;
        }
        for (int i = n-1; i >= 0; i--) {
            cout << s[i] << " ";
        }
        cout << "\n";
    }
}