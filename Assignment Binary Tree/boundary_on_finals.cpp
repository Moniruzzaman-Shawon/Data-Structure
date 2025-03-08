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
    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1) {
            curr->left = new Node(leftVal);
            q.push(curr->left);
        }
        if (rightVal != -1) {
            curr->right = new Node(rightVal);
            q.push(curr->right);
        }
    }
    return root;
}

void printLeftReverse(Node* root) {
    if (!root) return;

    stack<int> leftValues;
    Node* curr = root->left;

    while (curr) {
        leftValues.push(curr->val);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }

    while (!leftValues.empty()) {
        cout << leftValues.top() << " ";
        leftValues.pop();
    }
}

void printRightNormal(Node* root) {
    if (!root) return;

    Node* curr = root->right;

    while (curr) {
        cout << curr->val << " ";
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
}

void printRoot(Node* root) {
    if (root) {
        cout << root->val << " ";
    }
}

int main() {
    Node* root = inputTree();

    // Case 1: Only left child exists
    if (root->left && !root->right) {
        printLeftReverse(root);
        printRoot(root);
    }
    // Case 2: Only right child exists
    else if (!root->left && root->right) {
        printRoot(root);
        printRightNormal(root);
    }
    // Case 3: Both children exist
    else {
        printLeftReverse(root);
        printRoot(root);
        printRightNormal(root);
    }

    return 0;
}
