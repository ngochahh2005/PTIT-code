#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int d = 1;
        stack<int> st;
        st.push(1);
        for (char c : s) {
            d++;
            if (c == 'I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(d);
        }
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}