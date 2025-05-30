#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;
const ll BASE = 131;
const ll MOD = 1e9 + 7;

int N, Q;
string S;

// Mảng Segment Tree cho hash xuôi và ngược
ll fwdHash[4 * MAXN], bwdHash[4 * MAXN], power[MAXN];

// Hàm xây dựng power của base trước
void buildPower() {
    power[0] = 1;
    for (int i = 1; i < MAXN; i++)
        power[i] = (power[i - 1] * BASE) % MOD;
}

void build(int id, int l, int r) {
    if (l == r) {
        fwdHash[id] = S[l - 1] - '0' + 1;
        bwdHash[id] = S[l - 1] - '0' + 1;
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    int lenR = r - mid, lenL = mid - l + 1;
    fwdHash[id] = (fwdHash[id * 2] * power[lenR] + fwdHash[id * 2 + 1]) % MOD;
    bwdHash[id] = (bwdHash[id * 2 + 1] * power[lenL] + bwdHash[id * 2]) % MOD;
}

void update(int id, int l, int r, int pos, int val) {
    if (l == r) {
        fwdHash[id] = bwdHash[id] = val + 1;
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid)
        update(id * 2, l, mid, pos, val);
    else
        update(id * 2 + 1, mid + 1, r, pos, val);
    int lenR = r - mid, lenL = mid - l + 1;
    fwdHash[id] = (fwdHash[id * 2] * power[lenR] + fwdHash[id * 2 + 1]) % MOD;
    bwdHash[id] = (bwdHash[id * 2 + 1] * power[lenL] + bwdHash[id * 2]) % MOD;
}

pair<ll, ll> getHash(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return {0, 0};
    if (u <= l && r <= v)
        return {fwdHash[id], bwdHash[id]};
    int mid = (l + r) / 2;
    auto left = getHash(id * 2, l, mid, u, v);
    auto right = getHash(id * 2 + 1, mid + 1, r, u, v);

    int lenL = max(0, min(mid, v) - max(l, u) + 1);
    int lenR = max(0, min(r, v) - max(mid + 1, u) + 1);

    ll fwd = (left.first * power[lenR] + right.first) % MOD;
    ll bwd = (right.second * power[lenL] + left.second) % MOD;
    return {fwd, bwd};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S;
    N = S.size();
    buildPower();
    build(1, 1, N);

    cin >> Q;
    while (Q--) {
        string type;
        cin >> type;
        if (type == "q") {
            int l, r;
            cin >> l >> r;
            auto h = getHash(1, 1, N, l, r);
            if (h.first == h.second)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else if (type == "c") {
            int pos;
            char x;
            cin >> pos >> x;
            update(1, 1, N, pos, x - '0');
        }
    }
    return 0;
}
