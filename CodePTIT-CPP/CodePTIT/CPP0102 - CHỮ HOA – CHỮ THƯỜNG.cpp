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
    while (t--) {
        char ch, tmp;
        cin >> ch;
        if (isupper(ch)) tmp = tolower(ch);
        else tmp = toupper(ch);
        cout << tmp << "\n";
    }
}