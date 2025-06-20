#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj;
vector<bool> dd;
vector<int> a;
vector<vector<int>> rs;
int n, start;

void ghiNhan() {
    vector<int> cycle;
    for (int i = 1; i <= n; i++) cycle.push_back(a[i]);
    cycle.push_back(start);
    rs.push_back(cycle);
}

void Hamilton(int k) {
    for (int v : adj[a[k-1]]) {
        if (k == n+1 && v == start) {
            ghiNhan();
        } else if (!dd[v]) {
            a[k] = v;
            dd[v] = true;
            Hamilton(k+1);
            dd[v] = false;
        }
    }
}

void hamiltonCycle(int v0) {
    dd.assign(n+5, false);
    a.resize(n+5);
    a[1] = v0;
    dd[v0] = true;
    Hamilton(2);
}
  
int main() {
    ifstream fi("CT.INP");
    ofstream fo("CT.OUT");
    
    fi >> n >> start;
    adj.assign(n+5, vector<int>());
    int tmp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> tmp;
            if (tmp) adj[i].push_back(j);
        }
    }

    hamiltonCycle(start);
    if (rs.empty()) fo << 0;
    else {
        for (int i = 0; i < rs.size(); i++) {
            for (int x : rs[i]) fo << x << " ";
            fo << "\n";
        }
        fo << rs.size();
    }
    
    fi.close();
    fo.close();
}