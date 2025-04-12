#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int longest(string s) {
    stack<int> st;
    int rs = 0, l = 0, last = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') st.push(i);
        else {
            if (st.size()) {
                st.pop();
                rs += 2;
            }
        }
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
        string s;
        cin >> s;
        cout << longest(s) << "\n";
    }
}