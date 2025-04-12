#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool isOperator(string s) {
    if (s.length() != 1) return false;
    if (s != "+" && s != "-" && s != "*" && s != "/") return false;
    return true;
}

ll tienTo(string s[], int n) {
    ll rs = 0, tmp = 0;
    stack<ll> st;
    for (int i = n-1; i >= 0; i--) {
        if (!isOperator(s[i])) st.push(stoll(s[i]));
        else {
            ll a = st.top(); st.pop();
            ll b = st.top(); st.pop();
            if (s[i] == "+") tmp = a + b;
            else if (s[i] == "-") tmp = a - b;
            else if (s[i] == "*") tmp = a * b;
            else tmp = a / b;
            st.push(tmp);
        }
    }
    return st.top();
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        cout << tienTo(s, n) << '\n';
    }
}