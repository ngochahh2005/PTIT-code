#include <bits/stdc++.h>
using namespace std;

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ifstream fi("VANBAN.in");

    set<string> s;
    string tmp;
    while(fi >> tmp) {
        transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
        s.insert(tmp);
    }
    for (auto x : s) {
        cout << x << "\n";
    }

    fi.close();
}