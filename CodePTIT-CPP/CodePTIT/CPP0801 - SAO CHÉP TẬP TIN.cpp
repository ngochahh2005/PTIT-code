#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream fi("PTIT.in");
    ofstream fo("PTIT.out");

    string s;
    while (getline(fi, s)) {
        fo << s << "\n";
    }

    fi.close();
    fo.close();
}