#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int val = 0;
        int ch[30], n = str.length();
        for (int i = 0; i <= 26; i++) ch[i] = 1e9;
        for (int i = 0; i < n; i++) {
            if (isalpha(str[i])) {
                int x = str[i] - 'a' + 1;
                ch[x] = x;
                int tmp = x;
                if (str[i-1] == '-' && str[i-2] == '-') {
                    ch[x]--;
                    tmp--;
                } else if (str[i-1] == '+' && str[i-2] == '+') {
                    ch[x]++;
                    tmp++;
                    if (str[i-3] == '-') tmp = -tmp;
                } else if (str[i+1] == '-' && str[i+2] == '-') {
                    ch[x]--;
                    if (str[i-1] == '-') tmp = -tmp;
                } else if (str[i+1] == '+' && str[i+2] == '+') {
                    ch[x]++;
                    if (str[i-1] == '-') tmp = -tmp;
                } else if (str[i-1] == '-') tmp = -tmp;
                val += tmp;
            }
        }
        cout << "Expression: " << str << "\n";
        cout << "value = " << val << "\n";
        for (int i = 0; i <= 26; i++) {
            if (ch[i] != 1e9) {
                char buffer[2];
                sprintf(buffer, "%c", i + 'a' - 1);
                char c = buffer[0];
                cout << c << " = " << ch[i] << "\n"; 
            }
        }
    }
}
