#include <bits/stdc++.h>
using namespace std;

string add(string s1, string s2) {
    string res = "";
    int i = s1.length() - 1, j = s2.length() - 1;
    int nho = 0, n = 0, s = 0;
    while (i >= 0 || j >= 0 || nho > 0) {
        s = nho;
        if (i >= 0) s += s1[i--] - '0';
        if (j >= 0) s += s2[j--] - '0';
        nho = s / 10;
        res.push_back((s % 10) + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

string mul(string s1, char s2) {
    int l1 = s1.length();
    string res = "";
    int s = 0, nho = 0;
    for (int i = l1 - 1; i >= 0; i--) {
        s = nho + (s1[i] - '0') * (s2 - '0');
        res.push_back(s % 10 + '0');
        nho = s / 10;
    }
    if (nho > 0) res.push_back(nho + '0');
    reverse(res.begin(), res.end());
    return res;
}

string nhan(string s1, string s2) {
    string res = "0";
    int l2 = s2.length();
    for (int i = l2 - 1; i >= 0; i--) {
        string tmp = mul(s1, s2[i]);
        for (int j = i+1; j < l2; j++) {
            tmp += "0";
        }
        res = add(res, tmp);
    } 
    return res;
}

int count(int n, int x) {
    string res = "1";
    for (int i = 2; i <= n; i++) {
        string tmp = to_string(i);
        res = nhan(res, tmp);
    }
    int cnt = 0;
    // cout << res << "\n";
    for (int i = 0; i < res.length(); i++) {
        if (res[i] == x + '0') cnt++;
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << count(n, x) << "\n";
    }
    // cout << nhan("24", "5");
}
