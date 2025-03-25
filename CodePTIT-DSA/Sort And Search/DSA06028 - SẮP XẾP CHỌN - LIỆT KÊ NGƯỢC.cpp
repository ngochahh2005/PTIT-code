#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void selectionSort(int a[], int n, vector<string> &s) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[min_idx] > a[j]) min_idx = j;
        }
        swap(a[min_idx], a[i]);
        string rs = "Buoc " + to_string(i+1) + ":";
        for (int j = 0; j < n; j++) rs += " " + to_string(a[j]);
        s.emplace_back(rs);
    }
}

void in(vector<string> s) {
    for (int i = s.size()-1; i >= 0; i--) {
        cout << s[i] << "\n";
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    vector<string> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    selectionSort(a, n, s);
    in(s);
}