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

void insert(tree &node, int vl) {
    if (!node) {
        node = new Node(vl);
        return ;
    }
    if (vl < node->data) insert(node->left, vl);
    else insert(node->right, vl);
}

void postorder(tree node) {
    if (!node) return ;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
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
        tree node = nullptr;
        while (n--) {
            int vl; 
            cin >> vl;
            insert(node, vl);
        }
        postorder(node);
        cout << '\n';
    }
}