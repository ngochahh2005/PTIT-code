#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

string xoa(string str) {
    int l = str.length(), i = 0;
    while (i < l-1) {
        if (str[i] == '0' && str[i+1] == '8' && str[i+2] == '4') str.erase(i, 3);
        i++;
    }
    return str;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << xoa(str) << "\n";
    }
}