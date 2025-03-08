#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0; //to keep the value track & avoid loop

        void push(int val){     //complexity O(1)
        //insert at tail code same  
        sz++; //to keep the track
            Node* newnode = new Node(val);
            if(head != NULL && tail !=NULL){
                head = newnode;
                tail = newnode;
                return;

            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        void pop(){     //complexity O(1)
        //delete at tail code same
        sz--; //to keep the track
            Node* deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top(){   //int because it can return the top value
        //return the value of tail
            return tail->val;
        }
         //complexity O(1)

        int size(){     //complexity O(1) 
        //we have to track the size to keep O(1)
        //otherwise using loop will be O(N)
            return sz;
        }

        bool empty(){   //complexity O(1)
            return head == NULL;//short form
            //long form> using ifelse
            
        }



};

int main(){
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    //we cannot use loop to print like an array
    //we just have access on top
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
    
}