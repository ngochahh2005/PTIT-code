#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void print(stack<int> st) {
    if (st.empty()) {
        cout << "NONE\n";
        return ;
    }
    cout << st.top() << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    stack<int> st;
    while (q--) {
        string s;
        cin >> s;
        if (s == "PUSH") {
            int x;
            cin >> x;
            st.push(x);
        } 
        else if (s == "POP") {
            if (!st.empty()) st.pop();
        } else {
            print(st);
        }
    }
}