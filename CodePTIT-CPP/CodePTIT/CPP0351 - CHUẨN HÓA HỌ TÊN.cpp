#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void choice2(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string s[65];
    int n;
    stringstream ss(str);
    string w;
    while (ss >> w) {
        w[0] = toupper(w[0]);
        s[n++] = w;
    }
    for (int i = 1; i < n; i++) cout << s[i] << " ";
    cout << s[0] << "\n";
}
void choice1(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string s[65];
    int n = 0;
    stringstream ss(str);
    string w;
    while (ss >> w) {
        w[0] = toupper(w[0]);
        s[n++] = w;
    }
    for (int i = 2; i < n; i++) cout << s[i] << " ";
    cout << s[0] << " " << s[1] << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int choice;
        cin >> choice;
        cin.ignore();
        string s;
        getline(cin, s);
        if (choice == 1) choice1(s);
        else choice2(s);
    }
}
