#include <bits/stdc++.h>
using namespace std;

string mul(string s, int dg) {
    int l = s.length();
    string res = "";
    int r = 0, nho = 0;
    for (int i = l-1; i >= 0; i--) {
        int x = s[i] - '0';
        r = nho + x * dg;
        nho = r / 10;
        // cout << dg << " * " << s[i] - '0' << " = " << r << "    " << nho << '\n';
        res.push_back(r % 10 + '0');
    }
    if (nho > 0) res.push_back(nho + '0');
    reverse(res.begin(), res.end());
    // cout << res << "\n";
    return res;
}

int d1[15], d2[15];
bool kt(string s) {
    for (int i = 0; i < 10; i++) d2[i] = 0;
    for (int i = 0; i < s.length(); i++) {
        d2[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (d1[i] != d2[i]) return false;
    }
    return true;
}

bool check(string s) {
    if (s.length() < 2) return true;
    
    for (int i = 0; i < 10; i++) {
        d1[i] = 0;
    }
    for (int i = 0; i < s.length(); i++) {
        d1[s[i] - '0']++;
    }
    for (int i = 2; i <= s.length(); i++) {
        string tmp = mul(s, i);
        if (!kt(tmp)) return false;
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    while (!cin.eof()) {
        cin >> str;
        if (check(str)) cout << str << " is cyclic\n";
        else cout << str << " is not cyclic\n";
    }
}