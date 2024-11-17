#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct data {
    string ho, ten, pn, d, nm;
    friend bool operator<(const data &a, const data &b) {
        if (a.ten == b.ten) return a.ho < b.ho;
        return a.ten < b.ten;
    }
};

int tach(string s[], string str) {
    stringstream ss(str);
    string w;
    int n = 0;
    while (ss >> w) {
        s[n++] = w;
    }
    return n;
} 
  
int main() {
    ifstream fi("SOTAY.txt");
    ofstream fo("DIENTHOAI.txt");

    string str, ng;
    data a[1005];
    int i = 0, j = 0;
    while (getline(fi, str)) {
        if (i != j) a[j++].pn = str;
        else {
            string t[105], tmp = str;
            int n = tach(t, str);
            if (t[0] == "Ngay") ng = t[1];
            else if (isalpha(t[0][0])) {
                a[i].nm = tmp;
                a[i].d = ng;
                for (int k = 0; k < n-1; k++) a[i].ho += t[i] + " ";
                a[i].ten = t[n-1];
                i++;
            }
        }
        
    }
    sort(a, a+i);
    for (int k = 0; k < i; k++) fo << a[k].nm << ": " << a[k].pn << " " << a[k].d << "\n";

    fi.close();
    fo.close();
}