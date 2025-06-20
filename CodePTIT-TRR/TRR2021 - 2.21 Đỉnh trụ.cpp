#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj;
vector<bool> dd;
vector<int> rs;
int n;

void bfs(int x, int s) {
    queue<int> qu;
    qu.push(x);
    dd[x] = true;

    while (qu.size()) {
        int u = qu.front(); qu.pop();

        for (int v : adj[u]) {
            if (!dd[v] && v != s) {
                dd[v] = true;
                qu.push(v);
            }
        }
    }
}

int connected(int x) {
    dd.assign(n+5, false);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i == x) continue;
        if (!dd[i]) {
            cnt++;
            bfs(i, x);
        } 
    }
    return cnt;
}

void dinhTru() {
    int cnt1 = connected(0);
    for (int i = 1; i <= n; i++) {
        int cnt2 = connected(i);
        if (cnt1 != cnt2) rs.push_back(i);
    }
}
  
int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    int tmp;
    fi >> n;
    adj.assign(n+5, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> tmp;
            if (tmp) adj[i].push_back(j);
        }
    }

    dinhTru();
    fo << rs.size() << '\n';
    for (int x : rs) fo << x << " ";
    
    fi.close();
    fo.close();
}