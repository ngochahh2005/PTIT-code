#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    while (getline(cin, s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s);
        string w;
        while (getline(ss, w, '.') || getline(ss, w, '?') || getline(ss, w, '!')) {
            w[0] = toupper(w[0]);
            stringstream s2(w);
            string w2;
            int cnt = 0;
            string res = "";
            while(s2 >> w2) {
                int l = res.length();
                if (l == 0 || res[l - 1] == '\n') {
                    w2[0] = toupper(w2[0]); 
                }
                if (w2[w2.length() - 1] == '!' || w2[w2.length() - 1] == '?') {
                    w2.erase(w2.length() - 1);
                    res += " " + w2 + "\n";
                } else if (cnt == 0 || (!isalpha(w2[0]) && !isdigit(w2[0])) || res[l-1] == '\n') res += w2;
                else res += " " + w2;
                cnt++;
            }
            if (res[res.length() - 1] != '\n') res += "\n";
            cout << res;
        }
    }
}