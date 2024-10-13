#include <bits/stdc++.h>
#define ll long long
using namespace std;

string operator*(string a, int b) {
    if (a == "0" || b == 0) return "0";
    int l = a.length(), nho = 0;
    string res(l, '0');
    for (int i = l - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        res[i] = (nho % 10) + '0';
        nho /= 10;
    }
    if (nho > 0) res = to_string(nho) + res;
    return res;
}

string catalan(int n) {
    vector<int> a;
    for (int i = n + 2; i <= 2*n; i++) {
        a.emplace_back(i);
    }
    for (int i = 2; i <= n; i++) {
        int tmp = i;
        for (int j = 0; j < a.size() && tmp > 1; j++) {
            int uc = __gcd(a[j], tmp);
            a[j] /= uc;
            tmp /= uc;
        }
    }
    string res = "1";
    for (int i = 0; i < a.size(); i++) res = res * a[i];
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short int n;
    cin >> n;
    cout << catalan(n + 1);
}