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
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll tmp, n;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        string w;
        stack<ll> st;
        while (ss >> w) {
            if (!isOperator(w)) st.push(stoll(w));
            else {
                ll b = st.top(); st.pop();
                ll a = st.top(); st.pop();
                if (w == "+") tmp = a + b;
                else if (w == "-") tmp = a - b;
                else if (w == "*") tmp = a * b;
                else tmp = a / b;
                st.push(tmp);
            }
        }
        cout << st.top() << "\n";
    }
}