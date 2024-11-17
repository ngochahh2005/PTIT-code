#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

string hieu(string s1, string s2) {
    int i = s1.length() - 1, j = s2.length() - 1, nho = 0;
    string res = "";
    while (i >= 0 || j >= 0 || nho != 0) {
        int kq = nho;
        if (i >= 0) kq += (s1[i--] - '0');
        if (j >= 0) kq -= (s2[j--] - '0');
        if (kq < 0) {
            kq += 10;
            nho = -1;
        } else nho = 0;
        res = to_string(kq % 10) + res;
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if ((s1.length() == s2.length() && s1 < s2) || s1.length() < s2.length()) swap(s1, s2);
        cout << hieu(s1, s2) << "\n";
    }
}