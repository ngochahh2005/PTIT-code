#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

string add(string s1, string s2) {
    string s = "";
    int i = s1.length() - 1, j = s2.length() - 1, nho = 0;
    while (i >= 0 || j >= 0 || nho > 0) {
        int kq = nho;
        if (i >= 0) kq += (s1[i--] - '0');
        if (j >= 0) kq += (s2[j--] - '0');
        s = to_string(kq % 10) + s;
        nho = kq / 10;
    }
    // reverse(s.begin(), s.end());
    return s;
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
        cout << add(s1, s2) << "\n";
    }
}