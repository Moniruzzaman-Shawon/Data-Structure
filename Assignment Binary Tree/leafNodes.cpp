#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLeafNodesDescending(Node* root) {
    if (root == NULL)
        return;

    vector<int> leafNodes;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr->left == NULL && curr->right == NULL) {
            leafNodes.push_back(curr->val);
        }

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }

    sort(leafNodes.rbegin(), leafNodes.rend());

    for (int i = 0; i < leafNodes.size(); i++) {
        cout << leafNodes[i] << " ";
    }
}

int main() {
    Node* root = inputTree();
    printLeafNodesDescending(root);
    return 0;
}