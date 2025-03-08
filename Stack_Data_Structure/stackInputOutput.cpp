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