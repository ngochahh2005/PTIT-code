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
    cin.ignore();
    set<string> s;
    string tmp;
    for (int i = 0; i < n; i++) {
        getline(cin, tmp);
        s.insert(tmp);
    }
    cout << s.size();
}