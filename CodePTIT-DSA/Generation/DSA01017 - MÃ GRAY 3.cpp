#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
string binaryToGray(string bin) {
    string rs = "";
    rs += bin[0];
    for (int i = 1; i < bin.size(); i++) {
        char c = ((bin[i] - '0') ^ (bin[i-1] - '0')) + '0';
        rs += c;
    }
    return rs;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string bin;
        cin >> bin;
        cout << binaryToGray(bin) << "\n";
    }
}