#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string update(int a[], int n, int step) {
    string rs = "Buoc " + to_string(step) +":";
    for (int i = 0; i < n; i++) rs += " " + to_string(a[i]); 
    return rs;
}

void bubbleSort(int a[], int n, vector<string> &s) {
    for (int i = 0; i < n; i++) {
        bool ck = false; 
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                ck = true;
            }
        }
        if (!ck) break;
        s.emplace_back(update(a, n, i+1));
    }
}

void print(vector<string> s) {
    for (int i = s.size()-1; i >= 0; i--) {
        cout << s[i] << "\n";
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        vector<string> s;
        for (int i = 0; i < n; i++) cin >> a[i];
        bubbleSort(a, n, s);
        print(s);
    }
}