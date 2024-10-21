#include <bits/stdc++.h>
using namespace std;

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream fi("DATA.in");
    
    string s;
    while(true){
        getline(fi, s);
        if (s == "END") break;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        stringstream ss(s);
        string res = "";
        string w;
        int i = 0;
        while (ss >> w) {
            w[0] = toupper(w[0]);
            if (i == 0) res += w;
            else res += " " + w;
            i++;
        }
        cout << res << "\n";
    }

    fi.close();
}