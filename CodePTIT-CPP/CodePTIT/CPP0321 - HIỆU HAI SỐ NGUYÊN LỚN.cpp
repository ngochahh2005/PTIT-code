#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

string hieu(string s1, string s2) {
    string res = "";
    int kq = 0;
    int i = s1.length() - 1, j = s2.length() - 1, nho = 0;
    while (i >= 0 || j >= 0 || nho > 0) {
        kq = 0;
        if (i >= 0) kq += (s1[i] - '0');
        if (j >= 0) kq -= (s2[j] - '0');
        if (nho != 0) kq += nho;
        if (kq < 0) {
            kq += 10;
            nho = -1;
        } else {
            nho = 0;
        }
        // cout << s1[i] << "  " << s2[j] << "   " << kq << "\n";
        res = to_string(kq) + res;
        i--;
        j--;
    }
    // while(res.length() < s2.length()) res = "0" + res;
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
        if (s1.length() < s2.length()) swap(s1, s2);
        else if (s1.length() == s2.length() && s1 < s2) swap(s1, s2);
        cout << hieu(s1, s2) << "\n";
    }
}