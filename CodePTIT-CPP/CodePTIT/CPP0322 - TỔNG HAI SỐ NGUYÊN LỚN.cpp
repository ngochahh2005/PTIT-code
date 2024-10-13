#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

string tong(string s1, string s2) {
    string res = "";
    int i = s1.length() - 1, j = s2.length() - 1, nho = 0, kq;
    while (i >= 0 || j >= 0 || nho > 0) {
        kq = nho;
        if (i >= 0) kq += (s1[i--] - '0');
        if (j >= 0) kq += (s2[j--] - '0');
        nho = kq / 10;
        kq %= 10;
        res = to_string(kq) + res;
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
        cout << tong(s1, s2) << "\n";
    }
}