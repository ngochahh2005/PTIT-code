#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std; 

void tach(string str, vector<string> &s) {
    stringstream ss(str);
    string w;
    while (ss >> w) {
        s.emplace_back(w);
    }
    sort(s.begin(), s.end());
    s.resize(unique(s.begin(), s.end()) - s.begin());
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str1, str2;
        getline(cin, str1);
        getline(cin, str2);
        vector<string> s1, s2;
        tach(str1, s1);
        tach(str2, s2);
        for (int i = 0; i < s1.size(); i++) {
            if (!binary_search(s2.begin(), s2.end(), s1[i])) cout << s1[i] << " ";
        }
        cout << "\n";
    }
}