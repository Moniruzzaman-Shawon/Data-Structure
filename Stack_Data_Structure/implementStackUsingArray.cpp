#include <bits/stdc++.h>
using namespace std;

//using stack through vector
class myStack
{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){   //int because it can return the top value
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }



};

int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() <<endl;
    st.pop();
    cout << st.top() <<endl;
    st.pop();
    cout << st.top() <<endl;

    //when stack is empty and we print or pop it can be runtime error thats why whe have to use if else before using this
    if(st.empty()== false)
        st.pop();
    

    //corner case handle 
    //when stack is empty and we print or pop it can be runtime error thats why whe have to use if else before using this
    if(st.empty()== false)
        cout << st.top() << endl;
    
    //shortcut
    if(!st.empty())
        cout << st.top() <<endl;


    return 0;
}