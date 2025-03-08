#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st; // call the stack (built in)
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int val;
        cin >> val;
        st.push(val);
    }
//Always check empty or not before top()
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}