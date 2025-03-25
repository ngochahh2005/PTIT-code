#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string update(int a[], int n, int step) {
    string rs = "Buoc " + to_string(step) + ":";
    for (int i = 0; i < n; i++) rs += " " + to_string(a[i]);
    return rs;
}

void insertionSort(int a[], int n, vector<string> &s) {
    s.emplace_back(update(a, 1, 0));
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        s.emplace_back(update(a, i+1, i));
    }
}

void in(vector<string> s) {
    for (int i = s.size()-1; i >= 0; i--) cout << s[i] << "\n";
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
    insertionSort(a, n, s);
    in(s);
}