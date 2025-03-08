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
void printLeftValuesReverse(Node* root) {
    if (!root) return;

    queue<Node*> q;
    stack<int> leftValues;  // To store left values in reverse order
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // If there is a left child, store its value in stack
        if (curr->left) {
            leftValues.push(curr->left->val);
            q.push(curr->left);
        }
         else if (curr->right) {
            leftValues.push(curr->right->val);
            q.push(curr->right);
        }
    }

    // Print left values in reverse order
    while (!leftValues.empty()) {
        cout << leftValues.top() << " ";
        leftValues.pop();
    }
}

void printRoot(Node* root) {
    if (root) {
        cout << root->val << " ";
    }
}

void printRightValues(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        stack<int> rightValues;
        q.pop();

        // If there is a right child, print its value and push it to queue
        if (curr->right) {
            cout << curr->right->val << " ";
            q.push(curr->right);
        }
        else if (curr->left) {
            cout << curr->left->val << " ";
            q.push(curr->left);
        }
        
    }
}

int main() {
    Node* root = inputTree();
    printLeftValuesReverse(root);
    printRoot(root);
    printRightValues(root);

    return 0;
}
