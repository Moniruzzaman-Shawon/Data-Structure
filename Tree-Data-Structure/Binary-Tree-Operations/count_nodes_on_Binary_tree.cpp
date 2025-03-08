#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue <Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
    //Works in Node
    int l,r;
    cin >> l >> r;
    Node* myLeft, *myRight;
    if(l == -1) myLeft = NULL;
    else myLeft = new Node(l);

    if(r == -1) myRight = NULL;
    else myRight = new Node(r);

        //Connection
    p->left = myLeft;
    p->right = myRight;

    //Children push
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
};

int countNodes(Node* root){
    if(root == NULL)
        return 0;
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l + r + 1;
};

int main(){
    Node* root = inputTree();
    cout << countNodes(root);
    return 0;
}