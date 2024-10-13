#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != 'u' && str[i] != 'e' && str[i] != 'o' && str[i] != 'a' && str[i] != 'i' && str[i] != 'y') cout << '.' << str[i];
    }
}
