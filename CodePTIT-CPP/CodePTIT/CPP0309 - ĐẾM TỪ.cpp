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
        string str;
        getline(cin, str);
        stringstream ss(str);
        string word;
        int cnt = 0;
        while (ss >> word) {
            cnt++;
        }
        cout << cnt << "\n";
    }
}