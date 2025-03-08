#include <bits/stdc++.h>
using namespace std;
//using build in queue

int main(){
    queue <int> q; //build in call
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