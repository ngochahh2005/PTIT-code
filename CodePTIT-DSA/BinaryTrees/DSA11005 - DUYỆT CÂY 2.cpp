#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
typedef struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int vl) : data(vl), left(nullptr), right(nullptr) {}
} *tree;

map<int, int> mp;

tree buildTree(int l, int r, vector<int> lv) {
    if (l > r || lv.empty()) return nullptr;

    tree root = new Node (lv[0]);
    int rootIdx = mp[lv[0]];

    vector<int> leftLv, rightLv;
    for (int i = 1; i < lv.size(); i++) {
        int idx = mp[lv[i]];
        if (idx < rootIdx) leftLv.push_back(lv[i]);
        else rightLv.push_back(lv[i]);
    }

    root->left = buildTree(l, rootIdx - 1, leftLv);
    root->right = buildTree(rootIdx + 1, r, rightLv);

    return root;
}

tree build(vector<int> in, vector<int> lv) {
    mp.clear();
    for (int i = 0; i < in.size(); i++) {
        mp[in[i]] = i;
    }
    return buildTree(0, in.size() - 1, lv);
}

void postOrder(tree root, vector<int>& rs) {
    if (!root) return ;
    postOrder(root->left, rs);
    postOrder(root->right, rs);
    rs.push_back(root->data);
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
        vector<int> in(n), lv(n);
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> lv[i];

        tree root = build(in, lv);
        vector<int> rs;
        postOrder(root, rs);
        for (int x : rs) cout << x << " ";
        cout << "\n";
    }   
}