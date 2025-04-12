#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    deque<int> dq;
    string c;
    int tmp, q;
    cin >> q;
    while (q--) {
        cin >> c;
        if (c == "PUSHFRONT") {
            cin >> tmp;
            dq.push_front(tmp);
        } else if(c == "PRINTFRONT") {
            if (dq.size()) cout << dq.front() << "\n";
            else cout << "NONE\n";
        } else if (c == "POPFRONT") {
            if (dq.size()) dq.pop_front();
        } else if (c == "PUSHBACK") {
            cin >> tmp;
            dq.push_back(tmp);
        } else if (c == "PRINTBACK") {
            if (dq.size()) cout << dq.back() << "\n";
            else cout << "NONE\n";
        } else {
            if (dq.size()) dq.pop_back();
        }
    }
}