#include <iostream>
#include <queue>
#include <stack>
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

// Function to build the tree from input
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

// Function to print left values in reverse order
void printLeftReverse(Node* root) {
    if (!root) return;

    queue<Node*> q;
    stack<int> leftValues;  // Stack to store left values in reverse order
    q.push(root->left);  // Only consider left side

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Push left node values into stack
        leftValues.push(curr->val);

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }

    // Print values from stack (reverse order)
    while (!leftValues.empty()) {
        cout << leftValues.top() << " ";
        leftValues.pop();
    }
}

// Function to print right values in normal order
void printRightNormal(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root->right);  // Only consider right side

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Print the node value
        cout << curr->val << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

void printRoot(Node* root) {
    if (root) {
        cout << root->val << " ";
    }
}

int main() {
    Node* root = inputTree();

    if (root->left && !root->right) {
        // If only left child exists, print left values in reverse order + root
        printLeftReverse(root);
        printRoot(root);
    }
    else if (!root->left && root->right) {
        // If only right child exists, print root + right values in normal order
        printRoot(root);
        printRightNormal(root);
    }

    return 0;
}
