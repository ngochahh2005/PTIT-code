#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

string lonnhat(int m, int s) {
    if (m == 1 && s == 0) return "0";
    if (s == 0 || 9 * m < s) return "-1";
    string res = "";
    int i = 9;
    while (m > 0) {
        if (s < i) i--;
        else {
            res += to_string(i);
            m--;
            s -= i;
        }
    }
    return res;
}

string nhonhat(int m, int s, string ln) {
    if (m == 1 && s == 0) return "0";
    if (s == 0 || 9 * m < s) return "-1";
    string res = ln;
    reverse(res.begin(), res.end());
    if (res[0] == '0'){
        res[0] = '1';
        for (int i = 1; i < res.length(); i++) {
            if (res[i] > '0') {
                res[i] -= 1;
                break;
            }
        }
    } 
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, s;
    cin >> m >> s;
    string ma = lonnhat(m, s);
    string mi = nhonhat(m, s, ma);
    cout << mi << " " << ma;
}