#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string chuyen(string a, string b, int k) {
    string rs = "";
    int nho = 0, kq = 0, i = a.length() - 1, j = b.length() - 1;
    while (i >= 0 || j >= 0 || nho > 0) {
        kq = nho;
        if (i >= 0) kq += (a[i--] - '0');
        if (j >= 0) kq += (b[j--] - '0');
        nho = kq / k;
        rs = to_string(kq % k) + rs;
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
        string a, b;
        int k;
        cin >> k >> a >> b;
        cout << chuyen(a, b, k) << "\n";
    }
}