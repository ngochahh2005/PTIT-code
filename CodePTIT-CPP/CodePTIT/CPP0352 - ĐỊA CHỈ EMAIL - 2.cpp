#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

string chuanHoa(string str) {
    string res = "";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    stringstream ss(str);
    string w, s[55];
    int n = 0;
    while (ss >> w) {
        if (n > 0) res += s[n-1][0];
        s[n++] = w;
    }
    res = s[n-1] + res;
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    for (int i = 0; i < n; i++) {
        getline(cin, s[i]);
        s[i] = chuanHoa(s[i]);
    }
    map<string, int> cnt;
    for (int i = 0; i < n; i++) {
        cnt[s[i]]++;
        if (cnt[s[i]] > 1) s[i] += to_string(cnt[s[i]]);
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << "@ptit.edu.vn\n";
    }
}