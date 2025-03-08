#include <bits/stdc++.h>
using namespace std;

//using stack through list
class myStack
{
    public:
        list<int> l;

        void push(int val){     //complexity O(1)
            l.push_back(val);
        }

        void pop(){     //complexity O(1)
            l.pop_back();
        }

        int top(){   //int because it can return the top value
            return l.back();
        }
         //complexity O(1)

        int size(){
            return l.size();
        }

        bool empty(){   //complexity O(1)
            return l.empty();
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