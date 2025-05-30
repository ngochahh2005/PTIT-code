#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
typedef struct Node {
    int data;
    Node *left;
    Node *right;
    Node (int x) : data(x), left(nullptr), right(nullptr) {}
}*tree;

tree insert(tree node, int vl) {
    if (!node) return new Node(vl);
    if (vl < node->data) node->left = insert(node->left, vl);
    else node->right = insert(node->right, vl);
    return node;
}

void postOrder(tree node) {
    if (!node) return ;
    postOrder(node->left);
    postOrder(node->right);
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
            node = insert(node, vl);
        } 
        postOrder(node);
        cout << "\n";
    }
}