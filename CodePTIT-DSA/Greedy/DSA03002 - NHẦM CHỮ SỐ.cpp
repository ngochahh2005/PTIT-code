#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a_to_b(string s, char a, char b) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == a) s[i] = b;
    }
    return stoi(s);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    cout << a_to_b(s1, '6', '5') + a_to_b(s2, '6', '5') << " ";
    cout << a_to_b(s1, '5', '6') + a_to_b(s2, '5', '6') ;
}