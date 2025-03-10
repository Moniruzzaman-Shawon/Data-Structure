#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
}
};

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){         //O(1)
        //same as insert at tail in doubly linked list 
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop(){         //O(1)
        //same as delete head in doubly linked list 
        sz--;
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL){
            tail = NULL;  
            return; 
        }
        head->prev = NULL;
        
    }

    int front(){         //O(1)
        return head->val;
    }

    int back(){         //O(1)
        return tail->val;
    }

    int size(){
        //to keep track from the begining & avoid loop for time complexity
        //same as stack
        return sz;
    }
    bool empty(){
        return head == NULL;
    }

};

int main(){
    myQueue q;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}