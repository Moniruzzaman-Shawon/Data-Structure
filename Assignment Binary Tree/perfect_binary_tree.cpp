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

bool isPerfectBinaryTree(Node* root) {
    if (!root) return true;

    queue<Node*> q;
    q.push(root);
    bool isLeafLevel = false;

    while (!q.empty()) {
        int nodeCount = q.size();

        for (int i = 0; i < nodeCount; i++) {
            Node* currentNode = q.front();
            q.pop();

            if (!currentNode->left && !currentNode->right) {
                if (isLeafLevel) {
                    continue;
                } else {
                    isLeafLevel = true;
                }
            }

            if ((currentNode->left && !currentNode->right) || (!currentNode->left && currentNode->right)) {
                return false;
            }

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }
    }

    return true;
}

int main() {
    Node* root = inputTree();

    if (isPerfectBinaryTree(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
