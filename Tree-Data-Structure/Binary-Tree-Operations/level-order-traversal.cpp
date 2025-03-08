// Recursive C++ program for level
// order traversal of Binary Tree
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function prototypes
void printCurrentLevel(Node* root, int level);
int height(Node* node);

// Function to print level order
// traversal of a tree
void printLevelOrder(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

// Print nodes at a current level
void printCurrentLevel(Node* root, int level) {
    if (root == nullptr)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

// Compute the "height" of a tree
int height(Node* node) {
    if (node == nullptr)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        return (lheight > rheight) ? (lheight + 1) :
                                     (rheight + 1);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    printLevelOrder(root);
    return 0;
}